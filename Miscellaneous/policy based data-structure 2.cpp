#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using    namespace __gnu_pbds;

template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main() {
    ordered_set<int> os;
    
    // Insert elements into the ordered_set
    os.insert(1);
    os.insert(2);
    os.insert(3);
    os.insert(4);
    os.insert(5);
    os.insert(5);
    
    // Find the order of an element (0-based index) or Number if items strictly smaller than k
    int order = os.order_of_key(3); //* eta number dile index ber kore dey
    
    // Find the k-th element in the ordered_set (0-based index) or 
    int kth_element = *os.find_by_order(4); //* eta k-th index er value bole dey
    
    cout << "3's index: " << order << endl;
    cout << "4th element (0-based index) : " << kth_element << endl;

    cout << "Order of 3: " << order << endl;
    cout << "5th smallest element: " << kth_element << endl;
    
    return 0;
}

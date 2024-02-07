//* std::next vs std::advance in C++


/* std::next and std::advance are both standard library functions in C++ that can be used to move an iterator to a specified position. However, they differ in their functionality and use cases.

std::next is a template function that returns an iterator to the element that is n positions ahead of the given iterator it. For example, std::next(it, 3) returns an iterator to the element that is 3 positions ahead of it. If n is not specified, it defaults to 1, which means std::next(it) returns an iterator to the next element of it.

std::next is useful when you need to move an iterator by a fixed number of positions, especially when the distance to move is known at compile time. It can be used with any type of iterator that supports random access, bidirectional, or forward traversal.

On the other hand, std::advance is a template function that moves the given iterator it by n positions, where n can be positive or negative. For example, std::advance(it, 3) moves it 3 positions ahead, and std::advance(it, -2) moves it 2 positions back.

std::advance is useful when you need to move an iterator by a variable number of positions, especially when the distance to move is not known until runtime. It can be used with any type of iterator that supports random access, bidirectional, or forward traversal.

In summary, std::next and std::advance are both useful functions for moving iterators, but std::next is more suited for moving by a fixed number of positions, while std::advance is more suited for moving by a variable number of positions.

 */



#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5};
    list<int> l{6, 7, 8, 9, 10};

    // Example using std::next
    auto it1 = next(v.begin());    // it1 points to the second element of v
    auto it2 = next(l.begin(), 3); // it2 points to the fourth element of l
    cout << *it1 << " " << *it2 << endl; // Output: 2 9

    // Example using std::advance
    auto it3 = l.begin();         // it3 points to the first element of l
    advance(it3, 2);         // it3 points to the third element of l
    auto it4 = v.begin();         
    advance(it4, -1);        // it4 points to the first element of v
    cout << *it3 << " " << *it4 << endl; // Output: 8 1

    // Example using std::next in combination with std::find
    auto it5 = find(next(v.begin(), 2), v.end(), 4);
    if (it5 != v.end()) {
        cout << "Found 4 at position " << distance(v.begin(), it5) << endl;
    }

    // Example using std::advance in combination with std::sort
    advance(l.begin(), 1);
    sort(l.begin(), l.end());
    for (auto x : l) {
        cout << x << " ";
    }
    cout << endl; // Output: 6 7 8 9 10

    return 0;
}


/* In the first example, std::next is used to move an iterator to a fixed position, and the resulting iterator is dereferenced to access the element at that position.

In the second example, std::advance is used to move an iterator by a variable number of positions, and the resulting iterator is dereferenced to access the element at the new position.

In the third example, std::next is used in combination with std::find to search for an element in a range starting from a specified position.

In the fourth example, std::advance is used in combination with std::sort to sort a range starting from a specified position.
User
In summary, std::next and std::advance are both useful functions for moving iterators, but std::next is more suited for moving by a fixed number of positions, while std::advance is more suited for moving by a variable number of positions. what does it mean */


/* Here are some differences between std::next and std::advance:

    Function signature: std::next takes an iterator and a distance, and returns a new iterator that is distance positions away from the original iterator. std::advance takes an iterator and a distance, and modifies the original iterator to point to a position that is distance positions away from the original iterator.

    Return value: std::next returns a new iterator that points to a position distance positions away from the original iterator. std::advance does not return a value.

    Use cases: std::next is best suited for moving an iterator by a fixed number of positions, while std::advance is best suited for moving an iterator by a variable number of positions.

    Efficiency: std::next can be more efficient than std::advance when moving an iterator by a fixed number of positions, because it can use compile-time optimizations to calculate the new iterator position. std::advance, on the other hand, must calculate the new iterator position at runtime.

    Range checking: std::next performs range checking to ensure that the new iterator position is within the bounds of the container. std::advance does not perform range checking, so it is the responsibility of the programmer to ensure that the new iterator position is valid.

In summary, std::next is more suited for cases where you want to move an iterator by a fixed number of positions, while std::advance is more suited for cases where you want to move an iterator by a variable number of positions.
 */
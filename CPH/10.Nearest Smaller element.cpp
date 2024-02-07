#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nearestSmallerElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1); 
    stack<int> st; // Create a stack to store indices.

    for (int i = 0; i < n; i++) {
        // Check if the stack is empty or the top element is greater than the current element.
        while (!st.empty() && nums[st.top()] >= nums[i]) {
            st.pop(); // Pop elements from the stack until a smaller element is found.
        }

        // If the stack is not empty, the top element is the nearest smaller element.
        if (!st.empty()) {
            result[i] = nums[st.top()];
        }

        st.push(i); // Push the current index onto the stack.
    }

    return result;
}

int main() {
    vector<int> nums = {4, 5, 2, 10, 8};
    vector<int> result = nearestSmallerElement(nums);

    cout << "Nearest Smaller Elements:" << endl;
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

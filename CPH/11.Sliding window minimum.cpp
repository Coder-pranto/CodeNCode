/* Problem Statement:

You are given an array of integers and a sliding window of constant size that moves from left to right through the array. At each window position, you need to calculate the minimum value within the window. */


/* Algorithm:

1 Maintain a Queue: Use a queue (or deque) where each element is larger than the previous.

2 Initialization: Start with an empty queue.

3 Dequeuing (After Each Window Move):
        Remove elements from the queue's end until the last element is smaller than the new window element, or the queue is empty.
        Remove the first queue element if it's no longer in the window.

4 Enqueuing:
        Add the new window element to the queue.

5 Output Minimum Value:
        The first element in the queue is the minimum in the current window.

6 Repeat: Continue as the window moves right through the array, updating and outputting minimums. */




#include <iostream>
#include <vector>
#include <deque>

using namespace std;

vector<int> slidingWindowMinimum(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> result;
    deque<int> dq; // Using a deque to store indices of elements.

    for (int i = 0; i < n; i++) {
        // Remove elements from the back of the deque until they are greater than the current element.
        while (!dq.empty() && nums[dq.back()] >= nums[i]) {
            dq.pop_back();
        }

        // Remove the front element if it is outside the current window.
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        dq.push_back(i); // Push the current index onto the deque.

        // The front element of the deque is the minimum value inside the current window.
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }

    return result;
}

int main() {
    vector<int> nums = {2,1, 4, 5, 3, 4, 1, 2};
    int k = 4;
    vector<int> result = slidingWindowMinimum(nums, k);

    cout << "Minimum values in each sliding window:" << endl;
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}



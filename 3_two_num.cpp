//question 3

#include <iostream>
using namespace std;

// two sum problem 

// nput: arr[] = [0, -1, 2, -3, 1], target = -2
// Output: true
// Explanation: There is a pair (1, -3) with the sum equal to given target, 1 + (-3) = -2.


// Input: arr[] = [1, -2, 1, 0, 5], target = 0
// Output: false
// Explanation: There is no pair with sum equals to given target.


int main()
{

    int arr[] = {1, -3, 5, 8, 9};
    int target = 2;
    bool pairFound = false ; 

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                 cout << "Pair found  " << arr[i] << " + " << arr[j] << "  " << "=  " << (arr[i] + arr[j]) << endl;
                pairFound = true;
            }
        }
        
    }

    if(!pairFound){
        cout << "No pair found" << endl;
    }

    return 0;
}
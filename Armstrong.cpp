/* Armstrong Number Explanation
            An Armstrong
            number(also known as a narcissistic number, pluperfect number, or pluperfect digital invariant) is a number that is equal to the sum of its own digits raised to the power of the number of digits.


        
*/

#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;
    int temp = n;

    while (temp)
    {
        int last_digit = temp % 10;
        sum += (last_digit * last_digit * last_digit);
        temp = temp / 10;
    }

    if (sum == n)
    {
        cout << n << " is an Armstrong number";
    }
    else
    {
        cout << n << " is not an Armstrong number";
    }

    return 0;
}

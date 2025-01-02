#include <iostream>
using namespace std;
int main()
{

    int first = 0;
    int second = 1;
    int next;
int n ;

cout<< "enter value here : ";
cin>>n;
    // cout<< first << second ;

    for (int i = 1; i <= n; i++)
    {

        if (i == 1)
        {
            cout << "0";
            continue;
        }

        if (i == 2)
        {
            cout << "1";
            continue;
        }

        next = first + second;

        first = second;

        second = next;

        cout << next << " ";
    }

    return 0;
}
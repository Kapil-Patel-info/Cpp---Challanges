#include <iostream>
using namespace std;

int main() {
   

    // Print the doors that remain open
    cout << "Doors that are open:" << endl;
    for (int i = 1; i * i <= 100; ++i) {
        cout << i * i  << " "; // Print perfect square door numbers
    }


    cout << endl;
    return 0;
}

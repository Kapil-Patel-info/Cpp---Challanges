
#include <iostream>
using namespace std;
int main(){

    int sn = 4;
    int lar = 8;
    int hcf = 0;

    for (int i = 1; i <= sn; ++i)
    {

        if (sn % i == 0 && lar % i == 0)
        {

            hcf = i;
        }
    }

    cout << hcf;

return 0;
}
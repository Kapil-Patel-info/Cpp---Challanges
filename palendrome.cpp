#include <iostream>
using namespace std;
int main (){



int palendrome = 121;
int ans = palendrome;
int rev = 0 ;

while (palendrome!=0)
{
    int digit = palendrome%10;  
    rev = rev*10 + digit;  
    palendrome = palendrome/10;

}

if(rev==ans){
    cout<< "palendrome";
}else{
    cout<<"not a palendrome ";
}



    return 0;
}
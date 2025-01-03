#include <iostream>
using namespace std;

int main(){

// prime number 

int n=3;


if(n<=1){
cout<<"not a prime number";
return 0;
}

for(int i = 2 ; i*i<=n ; i++){

if(n%i==0){
    cout<< "not a prime number";
    return 0 ;
}

}

cout<<"prime number";

    return 0 ;
}




















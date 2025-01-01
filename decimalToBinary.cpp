#include <iostream>
using namespace std;


int decToBinary(int decNum){
    int ans = 0, pow = 1;


while(decNum){

int  reminder =  decNum%2;
decNum = decNum/2;

ans = ans + reminder*pow;
pow *= 10;


}
return ans;
}


int main(){

cout<<decToBinary(7); //ans 111

    return 0;
}
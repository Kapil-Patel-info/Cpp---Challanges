#include <iostream>
using namespace std; 

int BinaryToDecimal(int Binary){

int power = 1; int ans =0;

while(Binary){

int lastdigit = Binary%10;

 ans += lastdigit*power;

Binary /= 10;
 
power *= 2;


}
return ans;
}

int main(){

cout<<BinaryToDecimal(111);  //output : 7

}
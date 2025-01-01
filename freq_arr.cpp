// cout the frequency of an element in an array

#include <iostream>
using namespace std;

int main(){

int arr[] = {1,6,6,7,6};
int store = 0;

int size = sizeof(arr) / sizeof(arr[0]);

for(int i= 0 ; i<size; i++){

for(int j= 0 ; j<size; j++){

if(arr[i] == arr[j]){

 store += arr[i]; 

}

}

cout<< store;

}






    return 0 ;
}
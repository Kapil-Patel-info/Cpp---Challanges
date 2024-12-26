#include <iostream>  //bubble sort 
using namespace std;  

int main(){

int arr[]= {2,9,3,4,8,7};

int n = sizeof(arr) / sizeof(arr[0]);

for(int i =0; i<n-1 ; i++){

if(arr[i]> arr[i+1]){
int temp ;
temp = arr[i];
arr[i] = arr[i+1];
arr[i+1] = temp ;

}}


for(int i =0; i<=n ; i++){

cout<< arr[i] << " ";

}
    return 0;
}
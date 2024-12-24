//question 4

#include <iostream>
using namespace std;

int main(){

int arr[] = {9,2,1,5,3,6};

 int n = sizeof(arr) / sizeof(arr[0]); 

int min = arr[0];
int max = arr[0];
for(int i = 0 ; i< n ; i++){

cout<<arr[i]<< "  " ; 

if(min>arr[i]){
    min=arr[i];
}
if(max<arr[i]){
    max=arr[i];
}
}

cout<<endl;

cout<<"Smallest value : " << min  << endl; 
cout<<"Largest value  : " << max << endl; 

    return 0;
}
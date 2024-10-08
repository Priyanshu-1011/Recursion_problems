#include<iostream>
using namespace std;

int sum(int arr[], int size,int i){
    if(i==size-1)
        return arr[size-1];
    else
        return arr[i]+sum(arr,size,i+1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int result=sum(arr,size,0);
    cout<<"The sum of array is: "<<result;
    return 0;
}
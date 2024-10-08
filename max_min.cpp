#include<iostream>
using namespace std;
void max_min(int arr[],int index,int size){
    static int max_no=arr[0];
    static int min_no=arr[size-1];
    if (index==size){
        cout<<"The maximum value of array is:"<<max_no;
        cout<<"\nThe minimum value of array is: "<<min_no;
    }
    max_no=max(arr[index],max_no);
    min_no=min(arr[index],min_no);
    return max_min(arr,index+1,size);
}
int main(){
    int arr[]={1,2,4,5,6,7,8,9};
    int size =sizeof(arr)/sizeof(arr[0]);
    max_min(arr,0,size);
    return 0;
}
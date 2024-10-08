#include<iostream>
using namespace std;

int occurrence(int arr[],int n,int size,int index){
    static int count=0;
    if(index==size)
        return count;
    else{
        if(arr[index]==n)
            count++;
        occurrence(arr,n,size,index+1);
    }
}
int main(){
    int arr[]={1,2,4,5,1,2,1,2};
    int n;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter the number:";
    cin>>n;
    int count=occurrence(arr,n,size,0);
    cout<<"The number of occurrences of "<<n<<" in array is: "<<count;
    return 0;
}
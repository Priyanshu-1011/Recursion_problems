#include<iostream>
using namespace std;
sum_of_digits(int n){
    if(n<=0)
        return 0;
    else{
        return (n%10)+sum_of_digits(n/10);
    }
}
int main(){
    int n,result;
    cout<<"Enter the number:";
    cin>>n;
    result=sum_of_digits(n);
    cout<<"The result of sum_of_digits is: "<<result;
    return 0;
}
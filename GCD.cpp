#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    else 
        return gcd(b,a%b);
}
int main(){
    int n1,n2;
    cout<<"Enter number 1:";
    cin>>n1;
    cout<<"enter number 2:";
    cin>>n2;
    int result=gcd(n1,n2);
    cout<<"The result is: "<<result;
    return 0;
}
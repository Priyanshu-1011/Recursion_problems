#include<iostream>
using namespace std;

bool check_prime(int n,int i){
    if(n<2)
        return false;
    if(n%i==0)
        return false;
    if(i*i>n)
        return true;
    check_prime(n,i+1);
}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    bool result;
    result=check_prime(n,2);
    if(result==true)
        cout<<"The number "<<n<<" is prime";
    else
        cout<<"The number "<<n<<" is not prime";
    return 0;
}
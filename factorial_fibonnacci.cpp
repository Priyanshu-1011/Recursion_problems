#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
        return 1;
    else 
        return n*factorial(n-1);
}
int fibonnacci(int n){
    if(n==0 || n==1)
        return n;
    else   
        return fibonnacci(n-2)+fibonnacci(n-1);
}
int main(){
    int n,op,result;
    char ask='y';
    while(ask=='y'){
        cout<<"Select the function you want to perform:"<<endl;
        cout<<"1:FACTORIAL\n2:FIBONNACCI";
        cout<<"\nEnter the operation:";
        cin>>op;
        cout<<"\nEnter the number:";
        cin>>n;
        switch(op){
            case 1:result=factorial(n);
                    cout<<"The result of factorial of number "<<n<<" is:"<<result;
                    break;
            case 2:for(int i=0;i<=n;i++)
                    cout<<fibonnacci(i);
                    break;
            default:cout<<"Please enter correct operation";
        }
        cout<<"\nWould you like to continue(y or n):";
        cin>>ask;
    }
    return 0;
}
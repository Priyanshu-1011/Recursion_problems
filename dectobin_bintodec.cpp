#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

int binary_decimal(int n,int i){
    if(n<=0)
        return 0;
    else{
        return((pow(2,i)*(n%10))+binary_decimal(n/10,i+1));
    }
}

int decimal_binary(int n){
    if(n==0)
        return 0;
    else    
        return (n % 2 + 10 * decimal_binary(n/2));
}

int main(){
    int n,choice;
    string str;
    char ask='y';
    while(ask=='y' || ask=='Y'){
        int result_bin=0;
        int result_dec=0;
        n=0;
        cout<<"Select the operation:\n1.binary to decimal\n2.decimal to binary\n";
        cout<<"Enter the operation:";
        cin>>choice;
        switch(choice){
            case 1: cout<<"Enter the Binary number: ";
                    cin>>n;
                    result_dec=binary_decimal(n,0);
                    cout<<"The decimal number is: "<<result_dec;
                    break;
            case 2: cout<<"Enter the decimal number:";
                    cin>>n;
                    result_bin=decimal_binary(n);
                    cout<<"The binary number is: "<<result_bin;
                    break;
            default:cout<<"Please enter correct operation";
        }
        cout<<"\nWould you like to continue(y or n):";
        cin>>ask;
    }
    return 0;
}
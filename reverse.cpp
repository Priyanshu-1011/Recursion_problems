#include<iostream>
using namespace std;
//function to reverse array
void reverse_array(int arr[],int left,int right){
    if(left>=right)
        return;
    else
        swap(arr[left],arr[right]);
        return reverse_array(arr,left+1,right-1);
}

//function to reverse string
void reverse_string(string& str,int left,int right){
    if(left>=right)
        return;
    else
        swap(str[left],str[right]);
        return reverse_string(str,left+1,right-1);
}
//function to reverse digit
int reverse_digits(int n){
    static int n1=0;
    if(n==0){
        return n1;
    }
    else{
        int d=n%10;
        n1=n1*10+d;
        return reverse_digits(n/10);
    }
}
int main(){
    int arr[5]={1,2,3,4,5};;
    char ask='y';
    while(ask=='y' || ask=='Y'){
        int choice,n;
        n=0;
        string str="";
        cout<<"Select the datatype you want to perform operation on:\n";
        cout<<"1.Array\n2.String\n3.Digits\n";
        cout<<"Enter the choice:"; 
        cin>>choice;
        switch(choice){
            case 1: reverse_array(arr,0,4);
                    cout<<"The reversed array is:";
                    for(int i=0;i<5;i++){
                        cout<<"\t"<<arr[i];
                    }
                    break;
            case 2:cout<<"Enter the string:";
                    cin>>str;
                    reverse_string(str,0,str.length()-1);
                    cout<<"\nThe reversed string is: "<<str;
                    break;
            case 3:cout<<"Enter the digit:";
                    cin>>n;
                    n=reverse_digits(n);
                    cout<<"The reversed digit is: "<<n;
                    break;
            default:cout<<"Please enter the correct datatype";
        }
        cout<<"\nWould you like to continue(y or n):";
        cin>>ask;
    }
    return 0;
}
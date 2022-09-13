//code1

#include<bits/stdc++.h>
#include <iostream>
 
using namespace std;

int main()
{
    int n,rem=0,sum=0;
    cout<<"Palindrome number"<<endl;
    cout<<"enter the number: ";
    cin>>n;
    int num = n;
    while(n!=0){
        rem = n%10;
        sum = sum*10+ rem;
        n=n/10;
    }
     if(num==sum){
            cout<<"The number is Palindrome number";
        }
        else{
            cout<<"Number is not Palindrome";
        }
    
    return 0;
}
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int num[10];
    int miss[10]={0,1,2,3,4,5,6,7,8,9};
    cout<<"Finding missing digits"<<endl;
    cout<<"enter the mobile number: ";
    for(int i=0;i<10;i++){
    cin>>num[i];
    }
    for(int i =0;i<=9;i++){
    cout<<num[i];
    }
    sort(num,num+10);
    for(int i =0;i<=9;i++){
        for(int j=0;j<10;j++){
        if(num[i]==miss[j])
        cout<<endl;
        cout<<miss[j];
        }
    }
    cout<<endl;
    return 0;
}

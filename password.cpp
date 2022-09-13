#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a=0,b=0,c=0,d=0,j=0;
    cout<<"Strength of password"<<endl;
    string  str;
    cout<<"Enter the password: ";
    cin>>str;
    char m[]={'!','@','#','$','%','&','*'};
    int len = str.length();
    cout<<str;
for(int i=0;i<=len;i++){
    for(int j = 0;j<len;j++){
    if(isupper(str[i])){
        a=1;
    }
    if(islower(str[i])){    
      b=1;
    }
    if(m[j]==str[i]){
       c=1;
    }
    if(len>8){
        d=1;
    }
    }
}
    cout<<a<<b<<c<<d<<" ";
    int count=a+b+c+d;
    cout<<endl;
    cout<<count;
    cout<<endl;
    return 0;
}

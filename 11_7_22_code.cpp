#include<bits/stdc++.h>
using namespace std;

int main(){
    double income,tax=0;
    cout<<"enter the income: ";
    cin>>income;

//switch casee
switch(4){
    case 1: income <= 250000;
              cout<<"no tax is to be paid";
              break;
    
    case 2: income>= 250001 && income <= 500001;
              tax= income/20;
              cout<<tax;
              break;
    
    case 3: income>= 500001 && income <= 750001;
               tax = 12500+(income/10);
               cout<<tax; 
               break;
    
    case 4:income>= 750001 && income <= 100000;
            tax = 37500+((3*income)/20);
            cout<<tax;    
            break;
    
}

return 0;
}
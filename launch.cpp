#include<bits/stdc++.h>
using namespace std;

int main(){
  stack<int> checks;
  for(int i=1;i<6;i++){
    bool n;
    cin>>n;
    if(!n){
        break;
    }
    checks.push(i);
  }
    cout<<"Stack is: "<<checks.top();
    checks.pop();
    int a = checks.top();
    cout<<endl;
    if(a==5){
        cout<<"We are good to go!!"<<endl;
    }
    else if(a < 5){
        cout<<"Please check!!"<<endl;
    }
    return 0;
}

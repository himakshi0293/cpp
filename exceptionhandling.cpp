#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x=-1;
    cout<<"Before try"<<endl;
    try{
        cout<<"inside try"<<endl;
        if(x<0){
            throw x;
            cout<<"After throw "<<endl;
        }
    }
catch(int x){
    cout<<"Exception caught"<<endl;
}
cout<<"After catch"<<endl;
return 0;
}



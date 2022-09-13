#include<bits/stdc++.h>
using namespace std;

class a{
public:
void hey(int a){
    cout<<a<<endl;
}

void hey(string a,int b){
    cout<<a<<" "<<b<<endl;
}
};

int main(){
    a a1;
    a1.hey(2);
    a1.hey("abc",10);
    return 0;
}
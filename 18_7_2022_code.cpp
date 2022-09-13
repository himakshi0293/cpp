#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "hello";
    string::iterator it;
    it=str.end();

    for(int i=0;i<str.length();i++){
        cout<< *it;
        it++;
    }
    return 0;
}

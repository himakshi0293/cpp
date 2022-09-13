#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void hi(string name2){
        cout<<name2<<" from class a"<<endl;
    }
};

class b:public a{
    public:
    // void hi(){
    //     cout<<"this hi function is fromclass b"<<endl;
    // }
    void hello(string name1){
        cout<<name1<<" from class b"<<endl;
        string name2;
        cin>>name2;
        hi(name2);
        
    }
};

class c: public b{
    public:
    void hey(string name){
        cout<<name<<" from class c"<<endl;
        string name1;
        cin>>name1;
        hello(name1);
        
    }
};
int main(){
    string name;
    cin>>name;
    c c1;
    c1.hey(name);
    return 0;
}
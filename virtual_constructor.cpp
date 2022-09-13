#include<bits/stdc++.h>

using namespace std;

class person{
    public:
    person(int x){  //parameterized constructor
        cout<<"person::person(x)"<<endl;
    }
    person(){cout<<"person::person() called"<<endl;}
};

class faculty:public person{
    public:
    faculty(int x){
        cout<<"faculty:faculty(int x)"<<endl;
    }
    void show(){
        cout<<"derived class show function"<<endl;
    }
};

int main(){
     

    return 0;
}
#include<bits/stdc++.h>

using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"base class print function"<<endl;
    }
    void show(){
        cout<<"base class show function"<<endl;
    }
};

class derived:public base{
    public:
    void print(){
        cout<<"derived class print function"<<endl;
    }
    void show(){
        cout<<"derived class show function"<<endl;
    }
};

int main(){
     base *bptr;
     derived d;
     bptr = &d;
     bptr->print();
     bptr->show();

    return 0;
}
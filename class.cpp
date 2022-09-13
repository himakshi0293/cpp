#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class human{
    private:
    int count;
    public:
    string hair;
    human(string);
    int walk(string,int,int);
    int countt(int count){
        cout<<count<<endl;
    }
};

human::human(string Name){
        cout<<"I am "<<Name<<endl;
    }

int human::walk(string Name,int steps,int meters){
    cout<<Name<<" can walk"<<endl;
    cout<<steps<<" steps only"<<endl;
    cout<<meters<<"m"<<endl;
}

int main(){
    string Name;
    cin>>Name;
    human a(Name);
    a.hair= "But i have hair ";
    a.walk(Name,30,70);
    a.countt(200);
    cout<<a.hair;

}
    
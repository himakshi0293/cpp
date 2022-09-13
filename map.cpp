#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main(){

    map<int, string> ecoll;
    map<int, string>::iterator i;

    ecoll.insert({1,"a"});
    ecoll.insert({2,"b"});
    ecoll.insert({4,"d"});
    ecoll.emplace(3,"c");

    cout<<"Map "<<endl;
    for(i = ecoll.begin();i != ecoll.end(); ++i){
        cout<<"\t"<<i->first<<"\t"<<i->second;
        cout<<endl;
    }
    cout<<endl;
}
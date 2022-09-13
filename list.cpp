#include<bits/stdc++.h>
using namespace std;

void printlist(list<int> lists){
    list<int>::iterator it;
    for(it=lists.begin(); it != lists.end();it++){
        cout<<*it<<" ";
    }
}

int main(){
    list<int> list1,list2;

    for(int i=0;i<10;i++){
        list1.push_back(i*5);
        list2.push_back(i*10);
    }
    cout<<"list1: ";
    printlist(list1);
    cout<<endl;
    cout<<"list2: ";
    printlist(list2);
    cout<<endl;
    cout<<"Front: "<<list1.front()<<endl;
    cout<<"Back: "<<list1.back()<<endl;
    list1.pop_front();
    printlist(list1);
    cout<<endl;
    list1.pop_back();
    printlist(list1);
    cout<<endl;
    list1.reverse();
    printlist(list1);
    cout<<endl;
    
    cout<<endl;
    list1.sort();
    printlist(list1);
    cout<<endl;
    list1.swap(list2);
    cout<<"list1: ";
    printlist(list1);
    cout<<endl;
    cout<<"list2: ";
    printlist(list2);
    cout<<list1.size()<<endl;
    cout<<list2.size()<<endl;

}
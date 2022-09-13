#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

    // vector<int> first;
    // vector<int> second(5,100);
    // vector<int> third(second.begin(),second.end());
    // vector<int> fourth(third);

    
    // for(int i=0;i <5;++i){
    //     cout<<fourth[i]<<" ";
    // }

    vector<int> myvector;
    for(int i=0;i<5;i++){
        myvector.push_back(i);
    }

    myvector.resize(3,100);

    for(vector<int>::iterator i=myvector.begin();i!=myvector.end();++i) {
        cout<<*i;
    }


    return 0;
}
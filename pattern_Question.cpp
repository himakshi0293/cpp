#include<iostream>
using namespace std;

int main(){
    //pattern1 simple triangle
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // patter2
    //  int n;
    //  cin>>n;
    //  for(int i=0;i<n;i++){
    //   for(int j=1;j<=n-i;j++){
    //          cout<<"*";
    //      }
    //      cout<<endl;
    //  }

    // int n;
    // cin>>n;
    // for(int i=n;i>0;i--){
    //     for(int j=0;j<=n;j++){
    //         if(j>=i){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //patter4
     int n;
    cin>>n;
    for(int i=0;i<n;i++){
         for(int j=n;j>0;j--){
             if(j>i){
                 cout<<"*";
             }
             else{
                 cout<<" ";
             }
        }
         cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){
    int a=1,n;
    cin>>n;
    for(int i=0;i<n;i++){
         for(int j=n-i;j>0;--j){
            cout<<"*"<<"  ";
            
         }
         cout<<endl;
    }

    // int t=4*(n+1)-8;
    // for(int i =0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         if((i==0) || (j==n-1) ){
    //             cout<<a<<"  ";               
    //             a++;
    //         }
    //         else if((j==0)){
    //             cout<<t<<"  ";
    //             t--;
    //         }
    //         else if((i == n-1)){
    //             cout<<a+n-j-1<<"  ";
    //         }
    //         else{
    //             cout<<"   ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
}
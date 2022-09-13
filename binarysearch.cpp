#include<bits/stdc++.h>
using namespace std;

int bs(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid;
    // mid=(s+e)/2; logcally correct but when we see adding them can fo out of range so changing code to
    mid=s+(e-s)/2;
    while(s<=e){
    if(arr[mid]==key){
        cout<<"Element found "<<mid<<endl;
    }
    if(arr[mid]<key){  // right
        s=mid+1;
    }
    else{               //left
        e=mid-1;
    }
    mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int key;

    int arr[n];
    for(int i =0;i<n;i++){
        cout<<"Enter the elements: ";
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched: ";
    cin>>key;
    bs(arr,n,key);
    return 0;
}
 #include<bits/stdc++.h>
 using namespace std;

int main(){
    //array code
//  int arr[50];
// int n,d,s;
// cin>>n;
// cin>>d;
// cin>>s;
// arr[0]=s;
// cout<<arr[0]<<" ";
// for(int i=1;i<n;i++){
//  arr[i]=arr[i-1]+d;
//  cout<<arr[i]<<" ";
// }

     //no. of days passed since 1 jan
     string Name;
     int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};
     int m=0;
     int date,month,year;
     cout<<"enter your full name: ";
     cin>>Name;
     cout<<"Enter date: ";
     cin>>date;
     cout<<"Enter month: ";
     cin>>month;
    cout<<"Enter year: ";
    cin>>year;

    for(int i=0;i<12;i++){
        if(i<month-1){
            m=arr[i]+m;
        }
    }
    cout<<"Hello, "<<Name<<endl;
    if(year%4==0){
     cout<<"No of days passed since 1 Jan is: "<<m+date+1<<endl;  
    }
    else{
     cout<<"No of days passed since 1 Jan is: "<<m+date<<endl;  
    }

    
 return 0;
}




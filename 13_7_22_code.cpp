//WAP to find th largest three elements in array and find their average
//Union of two unsorted array
//calculate ceil and floor of each element in unsorted array

//code 1

/*#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    cout<<"Find largest three element and their average"<<endl;
    int n,a,b,c;
    float avg=0.0;
    int arr[50];
    cout<<"enter then size or array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    a=arr[0];
    b=arr[1];
    c=arr[2];
    for(int i=1;i<n;i++){
        if(arr[i]>a){
            c=b;
            b=a;
            a=arr[i];
        }
        else if(arr[i]>b){
            c=b;
            b=arr[i];
        }
        else if(arr[i]>c){
            c=arr[i];
        }
    }
    
    cout<<"largest: "<<a;
    cout<<"second largest: "<<b;
    cout<<"Third largest: "<<c;
    
    avg = (a+b+c)/3;
    cout<<"average: "<<avg;
    return 0;
}
 
 //code 2

 #include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    cout<<"Union of array"<<endl;
    int arr2[4]={7,4,5,0};
    int arr1[4]={6,2,4,5};
    
    for(int i =0;i<4;i++){
    cout<<arr1[i]<<" ";    
    
    }
    for(int j =0;j<4;j++){
        int flag =0;
        for(int i=0;i<4;i++){
            if(arr1[j]==arr2[i]){
                flag = 1;
                break;
            }
            else{
                flag =0;
            }
        }
        if(flag==0){
            cout<<arr2[j]<<" ";
        }
    }
    return 0;
}

//code 3

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void ceil_floor(double arr[],int n){
    double x;
    for(int i =0;i<n;i++){
        x = arr[i];
        if(int(x) == arr[i]){
        cout<<"ceil: "<<int(x)<<endl;
        cout<<"floor: "<<int(x)<<endl;  
        }
        if(x>0){
        cout<<"ceil: "<<int(x+1)<<endl;
        cout<<"floor: "<<int(x)<<endl;    
        }
        if(x<0){
        cout<<"ceil: "<<int(x-1)<<endl;
        cout<<"floor: "<<int(x)<<endl;
        }
        
    }
}


int main()
{
    cout<<"Ceil and floor of each element"<<endl;
    int n;
    double arr[10];
    cout<<"Enter size of array";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    ceil_floor(arr,n);
    return 0;
}

*/
//project1 user login and sign up
#include<bits/stdc++.h>

using namespace std;

void login(string user[],string pass[],string userr,string passs){
    int flag =0;
     for(int i =0;i<4;i++){
            if(user[i] == userr && pass[i] == passs){
                flag =1;
                break;
            }
            else{
                flag =0;
                
            }
        }
       
     if(flag!=0){
            cout<<"successfully login";
        }
        else{
            cout<<"invalid user";
        }
}

void signup(string user[],string pass[],string userr ,string passs){
    int flag=0;
    for(int j=0;j<4;j++){
            if(user[j] != userr){
                flag =1;
            }
            else{
                flag =0;
                break;
            }
    }
       
     if(flag==0){
            cout<<"user already exist";
        }
        else{
            cout<<"Account created succesfully";
        }
}

int main(){
    cout<<"login "<<endl;
    string user[10]={"himakshi","vasu","priya","pridhi"};
    string pass[10]={"him@1234","vasu@1234","priya@1234","pridhi@1234"};
    string userr,passs;
    int flag =0;
    string newuser[10];
    string newpass[10];
    int ch;
    cout<<"enter 1 to login or enter 2 to sign up: ";
    cin>>ch;

    switch(ch){
        case 1:cout<<"enter user name: ";
               cin>>userr;
               cout<<"Enter the password: ";
               cin>>passs;
               login(user,pass,userr,passs);
               break;
        case 2: cout<<"enter user name: ";
                cin>>userr;
                cout<<"Enter the password: ";
                cin>>passs;
               signup(user,pass,userr,passs);
               break;
    }
    
    return 0;
}


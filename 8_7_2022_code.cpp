#include <iostream>

using namespace std;
void marks(int x,string a,int n){
    for(int i=0;i=50;i++){
    cout<<"do you want to continue(y/n): ";
    cin>>a;
    if(a=="y"||a=="Y"){
        cout<<"Enter the Grades: ";
        cin>>n;
    }
    else{
        cout<<"exit";
    }
    }
}

int main()
{
    int x,n;
    string a;
    cout<<"Grading system"<<endl;
    cout<<"Enter the Grades: ";
    cin>>x;
    marks(x,a,n);
    return 0;
}


// code 2
#include <iostream>

using namespace std;

int main()
{
    int n,x;
    cout<<"Multiplication Table"<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Enter how many multiple do you want?: ";
    cin>>x;
    for(int i =1;i<=x;i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<endl;
    }
    
    return 0;
}


//code 3

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Pattern 1"<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<" ";
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}

//code 4

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Pattern 2"<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2 != 0){
                cout<<"* ";
            }
            else{
                cout<<i-j+1<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}


//code 5

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"ODD OR EVEN"<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    
    if(n%2 != 0){
        cout<<"ODD NUMBER";
    }
    else{
        cout<<"EVEN NUMBER";
    }
        
    

    return 0;
}

//code6

#include <iostream>

using namespace std;

int main()
{
    int n,count1=0,count2=0;
    cout<<"COUNT OF ODD OR EVEN NUMBER "<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
    int rem=n%10;
    if(rem%2==0){
        count1=count1+1;
    }
    else{
        count2=count2+1;
    }
    n=n/10;
    }
    cout<<"even number: "<<count1<<endl<<"Odd number: "<<count2;
    
    return 0;
}

//code 7


#include <iostream>

using namespace std;

int main()
{
    int a=0,b=1,c, n;
    cout<<"Fibonacci Series"<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }

    return 0;
}


//code8

#include <iostream>

using namespace std;

int main()
{
    int n,cs=0;
    cout<<"Cumulative Sum"<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
       cs=cs+n;
       cout<<cs<<endl;
       cin>>n;
    }

    return 0;
}

//code9

#include <iostream>

using namespace std;

int main()
{
    int n,cp=1;
    cout<<"Cumulative Product"<<endl;
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
       cp=cp*n;
       cout<<cp<<endl;
       cin>>n;
    }

    return 0;
}

//code10

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
   int arr[5]={1,5,3,4,2};
   sort(arr[0],arr[4],arr+5);
   int flag =0;
   int diff = arr[1]-arr[0];
   for(int i = 2;i<= 5;i++){
       if(arr[i] -arr[i-1] == diff){
           
       flag=1;
       break;
   }
   }
   if(flag==1){
       cout<<"no"<<endl;
   }
   else{
       cout<<"yes"<<endl;
   }
    return 0;
}

//code11

#include <iostream>

using namespace std;

int main()
{
    cout<<"find sum of 1 to nth number"<<endl;
    int n,sum=0;
    cout<<"enter the number: ";
    cin>>n;
    sum=(n*(n+1)/2);
    cout<<sum;
    
    return 0;
}


//code12

#include <iostream>

using namespace std;

int main()
{
    cout<<"Factorial"<<endl;
    int n,fact=1;
    cout<<"enter the number: ";
    cin>>n;
    for(int i = 1; i<=n;i++){
    fact=fact*i;
    }
    cout<<fact<<endl;
    return 0;
}



//code 13

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void median(int arr[],int n){
    sort(arr,arr+n);
    for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
    }
    if(n %2 != 0){
        float median_odd =arr[n/2];
        cout<<"median is: "<<median_odd;
    }
    else{
        float median_even = ((arr[n/2]+arr[(n-1)/2])/2);
        cout<<"median is: "<<median_even;
    }
}

int main()
{
    cout<<"Median of an array"<<endl;
    int arr[10],n;
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    median(arr,n);

    return 0;
}

//code14

#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void mode(int arr[],int n){
    int count=0,max=0,x;
    sort(arr,arr+n);
    for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            count++;
            if(count>=max){
                max=count;
                x=arr[i];
            }
        }
        else{
            count=0;
            continue;
        }
    }

    cout<<endl;
    cout<<x;
   
}

int main()
{
    cout<<"Mode of an array"<<endl;
    int arr[10],n;
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    mode(arr,n);

    return 0;
}

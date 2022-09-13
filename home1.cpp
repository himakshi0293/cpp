//code1

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n,rem=0,sum=0;
    cout<<"Palindrome number"<<endl;
    cout<<"enter the number: ";
    cin>>n;
    int num = n;
    while(n!=0){
        rem = n%10;
        sum = sum*10+ rem;
        n=n/10;
    }
     if(num==sum){
            cout<<"The number is Palindrome number";
        }
        else{
            cout<<"Number is not Palindrome";
        }
    
    return 0;
}

//code2


#include <iostream>
#include<bits/stdc++.h>

using namespace std;
void freq(int arr[],int n){
    sort(arr,arr+n);
    for(int j=0;j<n;j++){
    cout<<arr[j]<<" ";
    }
    for(int i=0;i<n;){
        int count=1;
        for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    cout<<endl;
    cout<<arr[i]<<" "<<count;
    i=i+count;
    }
    
}

int main()
{
    cout<<"Frequency of an array"<<endl;
    int arr[10],n;
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    freq(arr,n);

    return 0;
}


//code 3
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int up=0,low=0;
    
    cout<<"print even numbers in reverse order"<<endl;
    cout<<"enter the upper limit: ";
    cin>>up;
    cout<<"enter the lower limit: ";
    cin>>low;
    
    for(int i=up;i>=low;i--){
        if(i%2==0){
        cout<<i<<endl;
        }
    }

    return 0;
}

//code4

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n,d,sum=0,x=0;
    cout<<"Sum of series"<<endl;
    cout<<"enter the number: ";
    cin>>d;
    cout<<"Enter the terms: ";
    cin>>n;
    for(int i=0;i<n;i++){
        sum=sum*10+d;
        x=x+sum;
        cout<<sum<<" ";
    }
    cout<<endl;
    cout<<x;
    
    return 0;
}

//code5

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    double num;
    int a[10];
    bool check[10]={false};
    cout<<"Finding missing digits"<<endl;
    cout<<"enter the mobile number: ";
    cin>>num;
    for(int i=0;i<10;i++){
        a[i]=(int)num%10;
        num=num/10;
    }
    for(int i =0;i<=9;i++){
        check[a[i]]=true;
    }
    for(int i =0;i<=9;i++){
        if(!check[i]){
            cout<<i;
        }
    }
    cout<<endl;
    return 0;
}


//code6
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    string str;
    cout<<"print characters on even index"<<endl;
    cout<<"enter the string: ";
    cin>>str;
   int len=str.length();
    for(int i=0;i<=len;i++){
        if(i%2==0){
        cout<<str[i];
        }
    }

    return 0;
}

//code7

#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Printing alphabets"<<endl;
    char ch;
    char arr[30];
    cout<<"Enter the letter: ";
    cin>>ch;
    int num=(int)ch;
    
    for(int i=65;i<=num;i++){
        arr[i-65]=char(i);
        cout<<arr[i-65]<<" " ;
    }
    
    
}

//code8
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    cout<<"Intersection of array"<<endl;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    int arr1[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of 1st array: ";
        cin>>arr1[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<"enter elements of 2nd array: ";
        cin>>arr2[i];
    }
    
    for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
            if(arr1[i]==arr2[k]){
                cout<<arr1[i];
                break;
            }   
        }
    }

    return 0;
}


//code 9

#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int n,rem=0,sum=0;
    cout<<"Reverse the number"<<endl;
    cout<<"enter the number: ";
    cin>>n;
    int num = n;
    while(n!=0){
        rem = n%10;
        sum = sum*10+ rem;
        n=n/10;
    }
    cout<<"Number is: "<<sum;
    return 0;
}

//code10
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    cout<<"Concatinating array"<<endl;
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    string arr1[n];
    string arr2[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements of 1st array: ";
        cin>>arr1[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<"enter elements of 2nd array: ";
        cin>>arr2[i];
    }
    
    for(int i=0;i<n;i++){
            for(int k=0;k<n;k++){
            cout<<arr1[i] + arr2[k]<<" "<<endl;   
           
            }
        
    }

    return 0;
}






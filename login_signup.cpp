// //project1 user login and sign up
// #include<bits/stdc++.h>

// using namespace std;

// void login(string user[],string pass[],string userr,string passs){
//     int flag =0;
//      for(int i =0;i<4;i++){
//             if(user[i] == userr && pass[i] == passs){
//                 flag =1;
//                 break;
//             }
//             else{
//                 flag =0;
                
//             }
//         }
       
//      if(flag!=0){
//             cout<<"successfully login";
//         }
//         else{
//             cout<<"invalid user";
//         }
// }

// void signup(string user[],string pass[],string userr ,string passs){
//     int flag=0;
//     for(int j=0;j<user.size();j++){
//             if(user[j] != userr){
//                 flag =1;
//             }
//             else{
//                 flag =0;
//                 break;
//             }
//     }
       
//      if(flag==0){
//             cout<<"user already exist";
//         }
//         else{
//             cout<<"Account created succesfully";
//         }
// }

// int main(){
//     cout<<"login "<<endl;
//     vector <string> user;
//     user.push_back("himakshi");
//     user.push_back("vasu");
//     user.push_back("priya");
//     user.push_back("pridhi");
//     //={"himakshi","vasu","priya","pridhi"};
//     vector <string> pass={"him@1234","vasu@1234","priya@1234","pridhi@1234"};
//     string userr,passs;
//     int flag =0;
//     string newuser[10];
//     string newpass[10];
//     int ch;
//     cout<<"enter 1 to login or enter 2 to sign up: ";
//     cin>>ch;

//     switch(ch){
//         case 1:cout<<"enter user name: ";
//                cin>>userr;
//                cout<<"Enter the password: ";
//                cin>>passs;
//                login(user,pass,userr,passs);
//                break;
//         case 2: cout<<"enter user name: ";
//                 cin>>userr;
//                 user.push_back(userr);
//                 cout<<"Enter the password: ";
//                 cin>>passs;
//                 pass.push_back(passs);
//                signup(user,pass,userr,passs);
//                break;
//     }
    
//     return 0;
// }

#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector <int> a;
    int n;
    cin n;
    for(int i =0;i<n;i++){
        a.push_back(i);
    }
}
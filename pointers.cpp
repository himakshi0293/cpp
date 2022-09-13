//wap to find smallest and greatest number among 3 pointers 
#include<bits/stdc++.h>
using namespace std;

void great(int *a,int *b,int *c){
    if((*a>*b)&&(*a>*c)){
        cout<<*a<<" is greater"<<endl;
    }
    else if((*b>*a)&&(*b>*c)){
        cout<<*b<<" is greater"<<endl;
    }
    else{
        cout<<*c<<" is greater"<<endl;
    }
}
void small(int *a,int *b,int *c){
    if((*a<*b)&&(*a<*c)){
        cout<<*a<<" is smallest"<<endl;
    }
    else if((*b<*a)&&(*b<*c)){
        cout<<*b<<" is smallest"<<endl;
    }
    else{
        cout<<*c<<" is smallest"<<endl;
    }
}

int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int *a=&x,*b=&y,*c=&z;
    great(&x,&y,&z);
    small(&x,&y,&z);
    return 0;
}
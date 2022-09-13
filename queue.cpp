#include<iostream>
using namespace std;

# define MAXSIZE 10

class PlaywithNumbers{
    int _queue[MAXSIZE];
    int _front = -1;
    int _rear = -1;

    public:
    PlaywithNumbers(){
        cout<<"start playing: "<<endl;
    }

    bool isEmpty(){
        if(_front == -1 && _rear == -1){
            return true;
        }
        else{ 
            return false;
        }
    }

    void enqueue(int _number){
        if(_rear == MAXSIZE-1){
        cout<<"\n\tEnqueue: Queue is full!!"<<endl;
        }
        else{
            if(_front == -1){
                _front=0;
            }
            _rear++;
            _queue[_rear]=_number;
        }
    }

    void dequeue(){
        if(isEmpty()){
            cout<<"\n\tQueue is empty"<<endl;
        }
        else{
            if(_front == _rear){
                _front = _rear = -1;
            }
            else{
                _front++;
            }
        }
    }
        void geFront(){
            if(isEmpty()){
                cout<<"\n\tFront:Queue is empty"<<endl;
            }
            else{
                cout<<"\n\tFront: the number at front is: "<<_queue[_front]<<endl;
            }
        }
        void showQueue(){
            if(isEmpty()){
                cout<<"\n\tQueue is empty"<<endl;
            }
            else{
                cout<<"\t";
                for(int i = _front;i<_rear;i++){
                    cout<<_queue[i]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    int _flag=1,_iOption=0,_value;

    PlaywithNumbers obj;
    while(_flag == 1){
        cout<<"\n\t 1.ENQUEUE \n\t 2.DEQUEUE \n\t 3.FRONT \n\t 4.SHOW QUEUE \n\t 5.EXIT \n";
        cout<<"\n\t Option: ";
        cin>>_iOption;

        switch(_iOption){
            case 1: cout<<"\n\t Enter value: ";
            cin>>_value;
            obj.enqueue(_value);
            break;

            case 2: obj.dequeue();
            break;

            case 3: obj.geFront();
            break;

            case 4: obj.showQueue();
            break;

            case 5: _flag=0;
            break;
        }
    }

    return 0;
}
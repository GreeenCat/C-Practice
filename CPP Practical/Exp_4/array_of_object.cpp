//class account datamemebr: account no. balance dsiplayy balance greater than 5000

#include<stdlib.h>
#include<iostream>
using namespace std;
class bank{
    int acc;
    int balance;
    int count = 0;
    public:
    bank(){
        cout<<"Enter Details of Account Number: " << (count+1)<<endl; 
        cout<<"Enter Account Nummber"<<endl;
        cin>>acc;
        cout<<"Enter Balance"<<endl;
        cin>>balance;
        count++;
    }


    void check(){
        if(balance>=5000){
            cout<<"Account Number: "<< acc<<endl;
            cout<<"Balance: " << balance<<endl;
        }
    }

};


int main(){
    bank o1[5];
    system("cls");
    for(int i=0;i<5;i++){
        o1[i].check();
    }

    return 0;
}
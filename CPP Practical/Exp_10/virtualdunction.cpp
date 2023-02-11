#include<iostream>
using namespace std;
class base{

public:
virtual void print(){
    cout<<"I am baseee"<<endl;
}

};
class derived:public base{
public:
void print(){
    cout<<"I am derived class"<<endl;
}


};


int main(){
  derived o1;
base *ptr;


ptr = &o1;
ptr->print();

    return 0;
}
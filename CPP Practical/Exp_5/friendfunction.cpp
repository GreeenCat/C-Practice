#include<iostream>
using namespace std;
class printer{
string a;
public:
printer(){
cout<<"Enter A String"<<endl;
cin>>a;
}

friend void printerpart(printer e);

    
};


void printerpart(printer e){
    cout<<"String is: " << e.a<<endl;
}

int main(){
    printer o1;
    printerpart(o1);

    return 0;
}
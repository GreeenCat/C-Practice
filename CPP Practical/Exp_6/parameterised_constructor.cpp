#include<iostream>
using namespace std;
class mydata{
string name;
public:

mydata(string n){
name = n;
}
void printer(){
    cout<<"Name is: " << name;
}


};




int main(){
 mydata o1("Madhav");
 o1.printer();   

    return 0;
}
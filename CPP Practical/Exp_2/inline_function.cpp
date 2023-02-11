//WAP TO ADD TWO NUMBERS
#include<iostream>
using namespace std;
class sum{
    int a = 50;
    int b = 60;
    public:
    inline void add(){
            cout<<"Addition is: " << (a+b);
    }



};



int main(){
    
sum o1;
o1.add();
    return 0;
}
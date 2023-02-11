#include<iostream>
using namespace std;
class bindaryop{
    public:
    int real;
    int complex;

bindaryop(){}
bindaryop(int a ,int b){
    real = a;
    complex = b;
}

    bindaryop operator +(bindaryop x){
            bindaryop temp;
            temp.real = real + x.real;
                temp.complex = complex + x.complex;
               return temp;
    }
    void dsiplay(){
        cout<<real << " + " << complex << "i"<<endl;
    }


};
int main(){
 bindaryop o1,o2,o3;
o1 =  bindaryop(10,20);
o2 =  bindaryop(5,20);
o3 = o1+o2;


 o1.dsiplay();
 o2.dsiplay();
o3.dsiplay();

    return 0;
}
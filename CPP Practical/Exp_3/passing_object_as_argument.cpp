#include<iostream>
using namespace std;
class example{
    public:

    int a;
    int sum;

    void add(example t){
            sum = a+t.a;
            cout<<"Addition is:" << sum<<endl;
    }



};
int main(){
    example t1;
    example t2;
t1.a = 50;
t2.a = 40;
t1.add(t2);

    return 0;
}
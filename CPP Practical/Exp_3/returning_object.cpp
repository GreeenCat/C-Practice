#include<iostream>
using namespace std;
class sum{
public:
int a;
sum adder(sum o1,sum o2){
sum o3;
o3.a = o1.a + o2.a;
return o3;

}


};

int main(){
sum a;
sum b;
sum result;
a.a = 10;
b.a = 30;
result = result.adder(a,b);
cout<<"Sum is " << result.a;


    return 0;
}
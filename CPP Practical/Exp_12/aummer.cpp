#include<iostream>
using namespace std;
class summer{
int arr[5];
int sum = 0;
int *ptr;
public:
void getdata(){
cout<<"Enter Data"<<endl;
    for (int i = 0; i < 5; i++)
    {
       cin>>arr[i];
    }

    

}


void pointertopointer(){
    ptr = arr;
}


void printingpointer(){
    for (int i = 0; i < 5; i++)
    {
            sum = sum + ptr[i];
    }
    
}

void display(){
    cout<<"The sum is: " << sum;
}


};

int main(){
 summer o1;
 o1.getdata();
 o1.pointertopointer();
o1.printingpointer();    
o1.display();
    return 0;
}
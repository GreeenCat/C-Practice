#include<iostream>
using namespace std;
class mypointer{
int arr[5];
int *ptr;
public:

void setdata(){
    cout<<"Enter Data In array"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

}

void pointopointer(){
    ptr = arr;
}

void printer(){
    for (int i = 0; i < 5; i++)
    {
       cout<<ptr[i]<<endl;
    }
    
}


};

int main(){
 mypointer o1;
 o1.setdata();
 o1.pointopointer();   
o1.printer();
    return 0;
}
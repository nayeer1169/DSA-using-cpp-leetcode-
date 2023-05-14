#include <iostream>
using namespace std;

int main(){
    int *a=new int(15);
    int *b=a;

    *a=22;               //here value of b also will change with change in value 

    cout<<a<<endl;       //it show dame garbage value for both a and b
    cout<<b<<endl;

    cout<<*a<<endl;    //it show same actual value for both a and b
    cout<<*b<<endl;
}
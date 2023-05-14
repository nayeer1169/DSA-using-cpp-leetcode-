#include <iostream>
using namespace std;
//O(a+b) 
void printvalue(int a,int b){
    for (int i = 0;i<a;i++){
        cout<<i<<endl;
    }
    for (int j=0;j<b;j++){
        cout<<j<<endl;
    }
}

int main(){
    printvalue(10,15);
}
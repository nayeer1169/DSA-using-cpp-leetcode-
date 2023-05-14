#include <iostream>
using namespace std;

void printvalue(int n){
    for (int i = 0;i<n;i++){
        cout<<i<<endl;
    }
    for (int j=0;j<n;j++){
        cout<<j<<endl;
    }
}

int main(){
    printvalue(10);
}
#include <iostream>
using namespace std;

void BigO(int n){
    for (int i=0;i<n;i++){
        cout <<i<< endl;
    }
}

int main(){
    BigO(20);
}
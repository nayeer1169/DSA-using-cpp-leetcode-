#include <iostream>
using namespace std;
//this progrsm is to show O(a*b)
void BigO(int a,int b){
    for (int i =0;i<a;i++){
        for (int j =0;j<b;j++){
            cout<<i<<j<<endl;
        }
    }
}

int main (){
    BigO(10,12);
}
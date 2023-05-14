#include <iostream>
using namespace std;
//this progrsm is to show O(n2)
void BigO(int n){
    for (int i =0;i<n;i++){
        for (int j =0;j<n;j++){
            cout<<i<<j<<endl;
        }
    }
}

int main (){
    BigO(10);
}
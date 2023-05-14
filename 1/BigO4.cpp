//drop non dominants
#include <iostream>
using namespace std;
//here bigo time complexity is O(n2+n) but we asume that also as O(n2)
void BigO(int n){
    for (int i =0;i<n;i++){
        for (int j =0;j<n;j++){
            cout<<i<<j<<endl;
        }
    }
    for (int k =0;k<n;k++){
            cout<<k<<endl;
        }
}

int main (){
    BigO(10);
}
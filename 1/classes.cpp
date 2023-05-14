#include <iostream>
using namespace std;
class cookie{
    private:
    string color;
    public:
    cookie (string color){
        this->color=color;
    }
    string getColor(){
        return color;
    }
    void setColor(string color){
        this->color=color;
    }
};

int main(){
    cookie* cookieOne = new cookie("Green");
    cookie* cookieTwo = new cookie("Blue");

    cookieOne->setColor("Yellow");

    cout<<"C1:"<<cookieOne->getColor()<<endl;
    cout<<"C2:"<<cookieTwo->getColor()<<endl;
}
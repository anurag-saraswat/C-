#include <iostream>
using namespace std;

class Complex{
    private:
    int real;
    int img;
    public:
    Complex(int r=0,int i=0){
        real = r;
        img  = i;
    }
    void display(){
        cout<<real<<"+ i"<<img<<endl;
    }
    Complex operator+(Complex c1){
    Complex temp;
    temp.real = real + c1.real;
    temp.img = img + c1.img;
    return temp;
}
};

int main(){
    Complex c1(1,2),c2(1,2),c3;
    c3 = c2+c1;
    c3.display();
}

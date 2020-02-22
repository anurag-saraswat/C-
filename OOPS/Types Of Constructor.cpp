#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;

    public:

    void setLength(int l){
        length = l;
    }
    void setBreadth(int b){
        breadth = b;
    }

    //Constructors
       //Non-parameterized

       Rectangle(){
           setBreadth(1);
           setLength(1);
       }
       // parameterized
       Rectangle(int l , int b){
           setBreadth(l);
           setLength(b);
       }

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main() {
    Rectangle r1; 
    cout<<r1.area()<<endl;
    Rectangle r2(20,30); 
    cout<<r2.area()<<endl;

}

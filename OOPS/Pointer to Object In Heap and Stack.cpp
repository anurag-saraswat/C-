#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main() {
    Rectangle r;  //Object created in Stack
    Rectangle * p = &r;
    p->length =10;
    p->breadth = 5;
    cout<<p->area()<<endl;

    Rectangle *q=new Rectangle();  //Object is created in Heap
    q->length =10;
    q->breadth = 5;
    cout<<q->perimeter();

}

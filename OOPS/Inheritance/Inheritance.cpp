#include <iostream>
using namespace std;

class Rectangle{
    public:
      int length;
      int breadth;

      Rectangle(){
          cout<<"Constructor of Rectangle is Called"<<endl;
      }
      void setLength(int l){
          length =l;
      }
      void setBreadth(int b){
          breadth = b;
      }
      int area(){
          return length*breadth;
      }    
      int perimeter(){
          return 2*(length + breadth);
      }
};

class Cuboid:public Rectangle{
    private:
      int height;
    public:
       
       Cuboid(){
           cout<<"Constructor of Cuboid is called"<<endl;
       }
      void setHeight(int h){
         height =h;
       }
      int volume(){
        return length*breadth*height;
       }

};
int main() {
    cout<<"Hello World!"<<endl;
    Cuboid c;
    c.setLength(10);
    c.setBreadth(10);
    c.setHeight(10);
    cout<<"Volume is: "<<c.volume();
}

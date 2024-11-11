#include <iostream>

using namespace std;

struct Rectangle
{
// private:
    int width;
    int height;

public:
    Rectangle()
    {
    }
    Rectangle(int width, int heigt)
    {
        width = width;
        height = heigt;
    }

    int area()
    {
        return width * height;
    }

    void setWidth(int width)
    {
        width = width;
    }

    void setHeight(int height)
    {
        height = width;
    }

    int getWidth()
    {
        return width;
    }
    int getHeight()
    {
        return height;
    }
};
int main()
{

        
    
    
    Rectangle rect2; // Rectangle area={10,20} or Rectangle rect{20,20}
   
    rect2.setHeight(20);
    rect2.setWidth(12);
    
    Rectangle *rect3 = new Rectangle(20,20);
   
    cout << "new  area  is " << rect3->area() <<endl;
   


}

#include <iostream>
#include<memory>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    Rectangle(int l, int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth ;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    /*
    unique_ptr <Rectangle> ptr(new Rectangle (20,15));
    cout<<ptr->area()<<endl;

    unique_ptr<Rectangle> ptr2;
    ptr2=move(ptr); //ptr remove and ptr2 ponts at object
    cout<<ptr2->area();
    */

    shared_ptr <Rectangle> ptr(new Rectangle (20,15));
    cout<<ptr->area()<<endl;

    shared_ptr<Rectangle> ptr2;
    ptr2=ptr; //ptr remove and ptr2 ponts at object
    cout<<"ptr2 "<<ptr2->area()<<endl;
    cout<<"ptr "<<ptr->area()<<endl;
    cout<<ptr.use_count()<<endl;

    return 0;
}

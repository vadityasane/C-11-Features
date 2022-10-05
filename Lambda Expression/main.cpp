#include <iostream>

using namespace std;

template <typename T>
void fun(T p)
{
    p();
}

int main()
{
    //[](){cout<<"Hello Folks"<<endl;}();
    //[](int x, int y){cout<<"The Sum is: "<<x+y<<endl;}(10,30);
     // cout<<([](int x, int y){return x+y;}(10,30));

     /* int a=[](int x,int y)->int{return x+y;}(20,50);
      cout<<a;*/

      /*int a=10;
      [a](){cout<<a<<endl;}();*/

      /*int a=10;
      auto f=[a](){cout<<a<<endl;};

      f();
      f();*/

      /*int a=10;
      auto f=[&a](){cout<<a++<<endl;};

      f();
      a++;
      f();*/


      int a=10;
      auto f=[&a](){cout<<a++<<endl;};

      fun(f);
      fun(f);


    return 0;
}

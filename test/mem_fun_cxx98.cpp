
    
#include <boost/function.hpp>
#include <iostream>
#include <functional>


struct X {
  int foo(int);
};

int X::foo(int x) { return -x; }

int main()
{
    
boost::function<int (X*, int)> f;

f = &X::foo;
  
X x;
f(&x, 5);


    return 0;
}

// Ex12.1
// Implementing the * operator for the Box class
// to post-multiply by an integer
#include <iostream>
#include "Box.h"


int main()
{
  Box box {2, 3, 4};
  std::cout << "Box is " << box << std::endl;
  size_t n {3};
  Box newBox = box*n;
  std::cout << "After multiplying by " << n << " box is " << newBox << std::endl;
}

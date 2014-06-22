#include <iostream>
#include "../src/typewriter.h"

int main()
{
  Integer i = new Integer(), j = new Integer(3);
  Integer k = j;
  if(i.value() != 0 || j.value() != 3 || k.value() != 3)
  {
    cout << "Test 1 failed- basics" << endl;
    return 1;
  }
  i = 5;
  if(i.value() != 5)
  {
    cout << "Test 2 failed- assignment" << endl;
    return 1;
  }
  int a = i;
  if(a != 5)
  {
    cout << "Test 3 failed- integer assignment" << endl;
    return 1;
  }
}

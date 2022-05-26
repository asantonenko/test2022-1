#include <iostream>
#include "TestClass.h"

using namespace std;

int main()
{
    TestClass test;
    test.setCounter(100);
    cout << "Hello world! " <<test.getCounter() << endl;
    return 0;
}

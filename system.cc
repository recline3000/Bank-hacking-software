#include <iostream>
using namespace std;

const static bool isProjectPoorlyNamed = true;

int main(){
  if (isProjectPoorlyNamed == true)
    for (int i = 0; i < 10; i++)
      cout << "Please change project name" << '\n';
  return 0;
}

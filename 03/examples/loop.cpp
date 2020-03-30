// loop.cpp
#include <iostream>

using namespace std;

int main() {
  int x = 0;

begin:
  if (x > 10) goto end;
  cout << x << endl;
  x = x + 1;
  goto begin;
end:
  cout << "lá vou eu!" << endl;
}

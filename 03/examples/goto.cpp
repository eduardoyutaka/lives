// goto.cpp
#include <iostream>

using namespace std;

int main() {
 goto primeiro; 
 
segundo:
 cout << "segundo" << endl;
 goto terceiro;

primeiro:
  cout << "primeiro" << endl;
  goto segundo;

terceiro:
  cout << "terceiro" << endl;
}

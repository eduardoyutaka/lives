#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    double PI = 3.14159, raio, area;
    cin >> raio;
    
    area = PI * raio * raio;
    cout << "A=" << fixed << setprecision(4) << area << endl;
 
    return 0;
}

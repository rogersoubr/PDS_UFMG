#include <iostream>
#include <vector>

using namespace std;


class MathUtils {
 public:
 static double calcularMedia(double a, double b) {
 return (a + b)/2;
 }
};
int main() {
 cout << MathUtils::calcularMedia(10, 20) << endl;
 return 0;
}

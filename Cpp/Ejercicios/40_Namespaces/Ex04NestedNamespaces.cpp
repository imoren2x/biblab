#include <iostream>
namespace uno {
int x;
namespace dos {
int x;
namespace tres {
int x;
}
}
}
using std::cout;
using std::endl;
using uno::x;
int main() {
x = 10; // Declara x como uno::x
uno::dos::x = 30;
uno::dos::tres::x = 50;
cout << x << ", " << uno::dos::x <<
", " << uno::dos::tres::x << endl;
std::cin.get();
return 0;
}
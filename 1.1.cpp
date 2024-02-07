#include <algorithm>
#include <iostream>
#include <vector>

int main() {
 
   std::vector<int> vi{4,7,9,14,12};
   auto print_input = [](const int& i) {std::cout << i << "\t";};
   auto print_output = [](const int& n) {std::cout << ((n % 2) ? n*3 : n) << "\t";};
   std::cout << "Input data: ";
   std::for_each(vi.begin(), vi.end(), print_input);
   std::cout << "\nOutput data: ";
   std::for_each(vi.begin(), vi.end(), print_output);

}
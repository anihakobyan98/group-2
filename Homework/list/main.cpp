#include <iostream>
#include "DList.h"


int main() {
    List list;
    for(int i=0; i<9; ++i) {
        std::cout << list.pushFront(i) << std::endl;
}
  
    return 0;
}

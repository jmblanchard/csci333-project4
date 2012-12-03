#include "HashTable.h"
#include <iostream>

int main() {
    HashTable<int> *hi = new HashTable<int>();
    int hi_val;
    hi->insert("first",1);
    hi->insert("second",2);

    if (hi->find("first",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("second",hi_val))
        std::cout << hi_val << "\n";

    return 0;
}

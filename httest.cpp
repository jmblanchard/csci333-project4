#include "HashTable.h"
#include <iostream>

int main() {
    HashTable<int> *hi = new HashTable<int>();
    int hi_val;
    std::cout << "\n";
    hi->insert("first",1);
    hi->insert("second",2);
    hi->insert("third",3);
    hi->insert("fourth",4);
    hi->insert("fifth",5);

    if (hi->find("first",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("second",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("third",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("fourth",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("fifth",hi_val))
        std::cout << hi_val << "\n";

    hi->remove("second");
    if (hi->find("second",hi_val))
        std::cout << hi_val << "\n";
    hi->remove("fourth");
    if (hi->find("fourth",hi_val))
        std::cout << hi_val << "\n";

    hi->insert("first",11);
    if (hi->find("first",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("second",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("third",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("fourth",hi_val))
        std::cout << hi_val << "\n";
    if (hi->find("fifth",hi_val))
        std::cout << hi_val << "\n";

    HashTable<double> *hd = new HashTable<double>();
    double hd_val;

    std::cout << "\n";
    hd->insert("first",1);
    hd->insert("second",2);
    hd->insert("third",3);
    hd->insert("fourth",4);
    hd->insert("fifth",5);

    if (hd->find("first",hd_val))
        std::cout << hd_val << "\n";
    if (hd->find("second",hd_val))
        std::cout << hd_val << "\n";
    if (hd->find("third",hd_val))
        std::cout << hd_val << "\n";
    if (hd->find("fourth",hd_val))
        std::cout << hd_val << "\n";
    if (hd->find("fifth",hd_val))
        std::cout << hd_val << "\n";

    hd->remove("second");
    if (hd->find("second",hd_val))
        std::cout << hd_val << "\n";
    hd->remove("fourth");
    if (hd->find("fourth",hd_val))
        std::cout << hd_val << "\n";

    hd->insert("first",11);
    if (hd->find("first",hd_val))
        std::cout << hd_val << "\n";
    if (hd->find("second",hd_val))
        std::cout << hd_val << "\n";
    if (hd->find("third",hd_val))
        std::cout << hd_val << "\n";
    if (hd->find("fourth",hd_val))
        std::cout << hd_val << "\n";
    if (hd->find("fifth",hd_val))
        std::cout << hd_val << "\n";

    HashTable<std::string> *hs = new HashTable<std::string>();
    std::string hs_val;

    std::cout << "\n";
    hs->insert("one","uno");
    hs->insert("two","dos");
    if (hs->find("uno",hs_val))
        std::cout << hs_val << "\n";
    if (hs->find("one",hs_val))
        std::cout << hs_val << "\n";
    if (hs->find("two",hs_val))
        std::cout << hs_val << "\n";

    delete hi;
    delete hd;
    delete hs;

    return 0;
}

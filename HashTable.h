#ifndef _HASHTABLE_H
#define _HASHTABLE_H

#include "Entry.h"

#include <string>
#include <list>

// This is small to more easily find collisions that need to be
// resolved by chaining.
const int TABLE_SIZE = 7;

template <typename T>
class HashTable {
  public:
    HashTable();
    ~HashTable();

    void insert(std::string key, T value);
    void remove(std::string key);

    // Why I made it this way. There is no way to know if the value
    // actually exists while returning a value at the same time. So, I made
    // a bool value return true if the value was found, and if it was
    // found it is place in value which is passed by reference.
    // Horrible workaround I'm using in lieu of say, returning a data
    // structure that would inform you if the value wasn't found.
    bool find(std::string key, T &value);

  private:
    std::list<Entry<T> *> *table_[TABLE_SIZE];

    int computeHash(std::string key);
};

#endif

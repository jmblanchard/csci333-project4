#ifndef _HASHTABLE_H
#define _HASHTABLE_H

#include "Entry.h"

#include <string>
#include <list>

const int TABLE_SIZE = 7;

template <typename T>
class HashTable {
  public:
    HashTable();
    ~HashTable();

    void insert(std::string key, T value);
    bool find(std::string key, T &value);
    void remove(std::string key);

  private:
    std::list<Entry<T> *> *table_[TABLE_SIZE];

    int computeHash(std::string key);
};

#endif

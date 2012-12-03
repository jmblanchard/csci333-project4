#include "HashTable.h"
#include <assert.h>

template <typename T>
HashTable<T>::HashTable() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        table_[i] = new std::list<Entry<T> *>();
    }
}

template <typename T>
HashTable<T>::~HashTable() {
    for (int i = 0; i < TABLE_SIZE; ++i) {
        delete table_[i];
    }
}

template <typename T>
void HashTable<T>::insert(std::string key, T value) {
    int hash = computeHash(key);
    assert(hash < TABLE_SIZE);

    bool exists = false;
    typename std::list<Entry<T> *>::iterator it;
    if (!table_[hash]->empty()) {
        for (it = table_[hash]->begin(); it != table_[hash]->end(); ++it) {
            if (((Entry<T>*)*it)->getKey().compare(key) == 0) {
                exists = true;
                break;
            }
        }
    }

    if (exists) {
        ((Entry<T>*)*it)->setValue(value);
    } else {
        Entry<T> *e = new Entry<T>(key, value);
        table_[hash]->push_back(e);
    }
}

template <typename T>
bool HashTable<T>::find(std::string key, T &value) {
    bool found = false;
    int hash = computeHash(key);
    assert(hash < TABLE_SIZE);

    typename std::list<Entry<T> *>::iterator it;
    if (!table_[hash]->empty()) {
        for (it = table_[hash]->begin(); it != table_[hash]->end(); ++it) {
            if (((Entry<T>*)*it)->getKey().compare(key) == 0) {
                found = true;
                value = ((Entry<T>*)*it)->getValue();
            }
        }
    }

    return found;
}

template <typename T>
void HashTable<T>::remove(std::string key) {
    int hash = computeHash(key);
    assert(hash < TABLE_SIZE);

    typename std::list<Entry<T> *>::iterator it;
    if (!table_[hash]->empty()) {
        for (it = table_[hash]->begin(); it != table_[hash]->end(); ++it) {
            if (((Entry<T>*)*it)->getKey().compare(key) == 0) {
                table_[hash]->erase(it);
                break;
            }
        }
    }
}

template <typename T>
int HashTable<T>::computeHash(std::string key) {
    int hash = 0;

    for (int i = 0; i < (int)key.size(); ++i) {
        hash += (int)key[i];
    }

    return hash % TABLE_SIZE;
}

template class HashTable<int>;
template class HashTable<double>;
template class HashTable<std::string>;

#ifndef _ENTRY_H
#define _ENTRY_H

#include <string>

template <typename T>
class Entry {
  public:
    Entry(std::string k, T v);
    ~Entry();

    void setValue(T v);
    T getValue();
    std::string getKey();

  private:
    std::string key_;
    T value_;
};

#endif

#ifndef B_H_
#define B_H_


#include "c-class.h"

class C;

class B {
 public:
  virtual void Get(C* c) = 0;
};

template<typename T>
class BChild : public B {
 public:
  BChild(T val) : val_(val) {}
  void Get(C* c);

 private:
  T val_;
};

template <typename T>
inline void BChild<T>::Get(C* c) {
  c->Get(val_);
}

#endif

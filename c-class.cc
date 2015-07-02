#include "c-class.h"


#include "a-class.h"
#include "b-class.h"

C::C() {
}

template<typename T>
void C::Get(T val) {
}

template void C::Get<int>(int val);

int main() {
  A a;
  B* pb = a.CreateB();
  C c;
  pb->Get(&c);

}

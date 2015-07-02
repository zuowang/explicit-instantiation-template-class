#include "a-class.h"

B* A::CreateB() {
  return new BChild<int>(0);
}


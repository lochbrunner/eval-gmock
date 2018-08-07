#include "foo.hpp"
#include <iostream>

void foo(int reps, Actor* actor, Sensor* sensor) {
  for (int i = 0; i < reps; ++i) {
    int value = sensor->goo();
    std::cerr << "value: " << value << std::endl;
    actor->doo(value);
  }
}

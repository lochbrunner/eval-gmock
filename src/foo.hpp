#ifndef FOO_HPP_
#define FOO_HPP_

class Actor {
 public:
  virtual void doo(int i) = 0;
};

class Sensor {
 public:
  virtual int goo() = 0;
};

void foo(int reps, Actor* actor, Sensor* sensor);

#endif  // FOO_HPP_
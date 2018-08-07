#include <iostream>

#include <gmock/gmock.h>

#include "foo.hpp"

using ::testing::InSequence;
using ::testing::Return;

class MockActor : public Actor {
 public:
  MOCK_METHOD1(doo, void(int));
};

class MockSensor : public Sensor {
 public:
  MOCK_METHOD0(goo, int());
};

TEST(foo, doo) {
  MockActor actor;
  MockSensor sensor;

  // InSequence s;

  // EXPECT_CALL(sensor, goo()).WillOnce(Return(1));

  EXPECT_CALL(sensor, goo()).WillOnce(Return(3)).WillOnce(Return(1)).WillOnce(Return(3));

  EXPECT_CALL(actor, doo(3)).Times(1).RetiresOnSaturation();
  EXPECT_CALL(actor, doo(1)).Times(1).RetiresOnSaturation();
  EXPECT_CALL(actor, doo(3)).Times(1).RetiresOnSaturation();
  EXPECT_CALL(actor, doo(3)).Times(1).RetiresOnSaturation();

  foo(3, &actor, &sensor);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
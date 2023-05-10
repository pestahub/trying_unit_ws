#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "mock_turtle.h"
#include "painter.h"

using ::testing::AtLeast;  // #1
using ::testing::_;

TEST(PainterTest, CanDrawSomething) {
  MockTurtle turtle;            // #2
  EXPECT_CALL(turtle, GoTo(50, 0))  // #3
      .Times(AtLeast(1));
  EXPECT_CALL(turtle, PenDown())  // #3
      .Times(AtLeast(1));

  Painter painter(&turtle);  // #4

  EXPECT_TRUE(painter.DrawCircle(50, 0, 10));  // #5
}

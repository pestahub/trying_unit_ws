#include "turtle.h"

class Painter {
  // painter.DrawCircle(0, 0, 10)
 public:
  Painter(Turtle* turtle) : turtle_(turtle) {}
  bool DrawCircle(int x, int y, int radius) {
    turtle_->GoTo(x, y);
    turtle_->PenDown();
    return true;
  }

  

 private:
  Turtle* turtle_;
};
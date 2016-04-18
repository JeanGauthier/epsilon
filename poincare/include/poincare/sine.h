#ifndef POINCARE_SINE_H
#define POINCARE_SINE_H

#include <poincare/function.h>

class Sine : public Function {
  public:
    Sine(Expression * arg, bool clone_arg=true): Function(arg, (char*) "sin", clone_arg) {}
    float approximate(Context& context) const override;
    Type type() const override;
    Expression * cloneWithDifferentOperands(Expression** newOperands,
        int numberOfOperands, bool cloneOperands = true) const override;
};

#endif

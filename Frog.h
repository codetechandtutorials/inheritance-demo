#pragma once
#include "LivingBeing.h"

class Frog final : virtual public LivingBeing {
public:
  Frog(const LivingBeingInfo& info);
  float JumpPower = 1.f;

  // Inherited via LivingBeing
  virtual std::string TypeName() const override;
private:
};
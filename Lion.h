#pragma once
#include "LivingBeing.h"
#include <typeinfo>

class Lion : virtual public LivingBeing {
  public:
    Lion(const LivingBeingInfo& info);
    float BitePower = 3.f;


    // Inherited via LivingBeing
    virtual void Eat(const FoodInfo& f_info) override;
    virtual std::string TypeName() const override;

  private:
};
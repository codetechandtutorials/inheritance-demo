#include "Lion.h"

Lion::Lion(const LivingBeingInfo & info) : LivingBeing(info)
{
}

void Lion::Eat(const FoodInfo& f_info) {
  Info.hit_points += f_info.energy * 2;
}

std::string Lion::TypeName() const {
  //return typeid(*this).name();
  return std::string(typeid(*this).name());
}

#include "LivingBeing.h"

static unsigned int totalUniqueIdCount{0};

LivingBeing::LivingBeing(const LivingBeingInfo& info) {
  Info = info;

  UniqueID = ++totalUniqueIdCount;
}

void LivingBeing::Update() {
  if (Info.hit_points <= 0)
  {
    Info.hit_points = 0;
  }
}

void LivingBeing::Eat(const FoodInfo& f_info) {
  Info.hit_points += f_info.energy;
}

std::string LivingBeing::TypeName() const {
  return std::string(typeid(*this).name());
}


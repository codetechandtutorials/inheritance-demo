#pragma once
#include <string>
#include <typeinfo>

struct LivingBeingInfo {
std::string species_name{};
int hit_points{};
};

struct FoodInfo {
  int energy;
};

class LivingBeing {
public:
  LivingBeing() = delete;
  LivingBeing(const LivingBeingInfo& info);

  virtual void Update();

  virtual void Eat(const FoodInfo& f_info);

  virtual std::string TypeName() const;

  LivingBeingInfo Info;

  int UniqueID{0};
private:

protected:
};
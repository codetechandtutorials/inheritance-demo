#include "Frog.h"

Frog::Frog(const LivingBeingInfo& info) : LivingBeing(info) {

}

std::string Frog::TypeName() const {
  //return typeid(*this).name();
  return std::string(typeid(*this).name());
}

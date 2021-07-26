// inheritance-demo.cpp : Defines the entry point for the application.
//

#include "inheritance-demo.h"

using namespace std;

std::vector<LivingBeing*> all_beings{};

int main() {
  {
    LivingBeingInfo frog_info;
    frog_info.species_name = "Tree";
    frog_info.hit_points = 3;
    all_beings.push_back(new Frog(frog_info));
    //all_beings.back()->JumpPower = 2.f;
  }
  {
    LivingBeingInfo lion_info;
    lion_info.species_name = "Sahara";
    lion_info.hit_points = 10;
    all_beings.push_back(new Lion(lion_info));
    FoodInfo meatinfo{};
    meatinfo.energy = 2;
    all_beings.back()->Eat(meatinfo);
  }

  for (const auto& b : all_beings) {
    cout << "Type:       " << b->TypeName() << endl;
    cout << "Species:    " << b->Info.species_name << endl;
    cout << "HP:         " << b->Info.hit_points << endl;
    cout << "Unique ID:  " << b->UniqueID << endl;

  }

  //Frog frog(frog_info);

  //frog.JumpPower = 2.f;
  //cout << "Type:       " << typeid(frog).name() << endl;
  //cout << "Species:    " << frog.Info.species_name << endl;
  //cout << "HP:         " << frog.Info.hit_points << endl;
  //cout << "Jump Power: " << frog.JumpPower << endl;
  //cout << "Unique ID:  " << frog.UniqueID << endl;


  //LivingBeingInfo lion_info;
  //lion_info.species_name = "Sahara";
  //lion_info.hit_points = 10;
  //Lion lion(lion_info);

  //lion.BitePower = 10.f;
  //FoodInfo meatinfo;
  //meatinfo.energy = 1;
  //lion.Eat(meatinfo);
  //cout << "Type:       " << typeid(lion).name() << endl;
  //cout << "Species:    " << lion.Info.species_name << endl;
  //cout << "HP:         " << lion.Info.hit_points << endl;
  //cout << "Bite Power: " << lion.BitePower << endl;
  //cout << "Unique ID:  " << lion.UniqueID << endl;


  //while (1)
  //{
  //	frog.Update();
  //	lion.Update();
  //}

  return 0;
}

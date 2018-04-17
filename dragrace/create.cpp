#include "car.h"
#include <iostream>
#include <tgmath.h>
#include <fstream>
using namespace std;

muscle createmusclecar(){
  string make;
  string model;
  double rpm;
  double weight;
  double torque;
  double rawtime;
  cout<<"Please enter manufacturer"<<endl;
  cin>>make;
  cout<<"Please enter model"<<endl;
  cin>>model;
  cout<<"Please enter WEIGHT (in kilograms)"<<endl;
  cin>>weight;
  cout<<"Please enter TORQUE"<<endl;
  cin>>torque;
  muscle m(weight,torque,make,model);
  return m;
}

super createsupercar(){
  string make;
  string model;
  double rpm;
  double weight;
  double torque;
  double rawtime;
  cout<<"Please enter manufacturer"<<endl;
  cin>>make;
  cout<<"Please enter model"<<endl;
  cin>>model;
  cout<<"Please enter WEIGHT (in kilograms)"<<endl;
  cin>>weight;
  cout<<"Please enter TORQUE"<<endl;
  cin>>torque;
  super s(weight,torque,make,model);
  return s;
}

drag createdragcar(){
  string make;
  string model;
  double rpm;
  double weight;
  double torque;
  double rawtime;
  cout<<"Please enter manufacturer"<<endl;
  cin>>make;
  cout<<"Please enter model"<<endl;
  cin>>model;
  cout<<"Please enter WEIGHT (in kilograms)"<<endl;
  cin>>weight;
  cout<<"Please enter TORQUE"<<endl;
  cin>>torque;
  drag d(weight,torque,make,model);
  return d;
}

commuter createcommutercar(){
  string make;
  string model;
  double rpm;
  double weight;
  double torque;
  double rawtime;
  cout<<"Please enter manufacturer"<<endl;
  cin>>make;
  cout<<"Please enter model"<<endl;
  cin>>model;
  cout<<"Please enter WEIGHT (in kilograms)"<<endl;
  cin>>weight;
  cout<<"Please enter TORQUE"<<endl;
  cin>>torque;
  commuter c(weight,torque,make,model);
  return c;
}

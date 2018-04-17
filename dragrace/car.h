#include <iostream>
#include <tgmath.h>
#include <fstream>
#ifndef CAR_H
#define CAR_H
using namespace std;

class car {
public:
  double weight;
  double rpm;
  double torque;
  string make;
  string model;
  double acceleration;
  double quartermile;
  double horsepower;
  double pw;
  double zerohundred;
  double finalspeed;
  double gforce;


  car (double weight, double torque, string make, string model){
    this-> weight = weight;
    this-> torque = torque;
    this-> make = make;
    this-> model = model;
  }
  car(){}
  virtual void savecar()=0;

  double calcaccel (){
    acceleration = 1.356*((24*torque)/(weight));
    return acceleration;
  }
  double calcpower (){
    horsepower = (rpm * torque)/5252;
    return horsepower;
  }
  double powertoweight (){
    pw = horsepower/weight;
    return pw;
  }
  double zeroto100 (){
  zerohundred = 28/acceleration;
    return zerohundred;
  }
  double quartermiletime (){
    quartermile = sqrt((804)/acceleration);
    return quartermile;
  }
  double qmvelocity (){
    finalspeed = (acceleration*quartermile);
    return finalspeed;
  }
  double speedtokmh (){
    return finalspeed*3.6*2;
  }
  double gforcecalc (){
    gforce = acceleration*0.101971621;
    return gforce;
  }
  void printwinner(){
    cout<<"Winner is: "<<make<<" "<<model<<", congratulations "<<make<<"!"<<endl;
  }

  void printallstats(){
    cout<<"\nCar: "<<make<<" "<<model<<endl;
    cout<<"Horsepower: "<<horsepower<<"HP at "<<rpm<<" rpm, from "<<torque<<" pound feet of torque"<<endl;
    cout<<"Quarter mile time is "<<quartermile<<" seconds at a final speed of "<<finalspeed<<" kilometers per hour"<<endl;
    cout<<"Zero to sixty time is "<<zerohundred<<" seconds, with a power to weight ratio of "<<pw<<" horsepower per kilogram"<<endl;
    cout<<"Maximum possible acceleration: "<<acceleration<<" with a maximum G-force of "<<gforce<<" Gs."<<endl;
  }
};

class muscle : public car {
  public:
    muscle(double weight, double torque, string make, string model):car(weight, torque, make, model){
      this->rpm=7000;
}
muscle():car(){}
void savecar(){
  fstream file;
  file.open("muscle.txt",ios::app);
  file<<"\n\nCar: "<<make<<" "<<model<<endl;
  file<<"Horsepower: "<<horsepower<<"HP at "<<rpm<<" rpm, from "<<torque<<" pound feet of torque"<<endl;
  file<<"Quarter mile time is "<<quartermile<<" seconds at a final speed of "<<finalspeed<<" kilometers per hour"<<endl;
  file<<"Zero to sixty time is "<<zerohundred<<" seconds, with a power to weight ratio of "<<pw<<" horsepower per kilogram"<<endl;
  file<<"Maximum possible accleration: "<<acceleration<<" with a maximum G-force of "<<gforce<<" Gs."<<endl;
  cout<<"file written"<< endl;
  file.close();
}


};

class super : public car {
  public:
    super(double weight, double torque, string make, string model):car(weight, torque, make, model){
    this->rpm=10000;
  }
  super():car(){}
  void savecar(){
    fstream file;
    file.open("super.txt",ios::app);
    file<<"\n\nCar: "<<make<<" "<<model<<endl;
    file<<"Horsepower: "<<horsepower<<"HP at "<<rpm<<" rpm, from "<<torque<<" pound feet of torque"<<endl;
    file<<"Quarter mile time is "<<quartermile<<" seconds at a final speed of "<<finalspeed<<" kilometers per hour"<<endl;
    file<<"Zero to sixty time is "<<zerohundred<<" seconds, with a power to weight ratio of "<<pw<<" horsepower per kilogram"<<endl;
    file<<"Maximum possible acceleration: "<<acceleration<<" with a maximum G-force of "<<gforce<<" Gs."<<endl;
    cout<<"file written"<< endl;
    file.close();
  }
};

class drag : public car {
  public:
    drag(double weight, double torque, string make, string model):car(weight, torque, make, model){
    this->rpm=13000;
  }
  drag():car(){}
  void savecar(){
    fstream file;
    file.open("drag.txt",ios::app);
    file<<"\n\nCar: "<<make<<" "<<model<<endl;
    file<<"Horsepower: "<<horsepower<<"HP at "<<rpm<<" rpm, from "<<torque<<" pound feet of torque"<<endl;
    file<<"Quarter mile time is "<<quartermile<<" seconds at a final speed of "<<finalspeed<<" kilometers per hour"<<endl;
    file<<"Zero to sixty time is "<<zerohundred<<" seconds, with a power to weight ratio of "<<pw<<" horsepower per kilogram"<<endl;
    file<<"Maximum possible acceleration: "<<acceleration<<" with a maximum G-force of "<<gforce<<" Gs."<<endl;
    cout<<"file written"<< endl;
    file.close();
  }
};

class commuter : public car {
  public:
    commuter(double weight, double torque, string make, string model):car(weight, torque, make, model){
    this->rpm=6000;
  }
  commuter():car(){}
  void savecar(){
    fstream file;
    file.open("commuter.txt",ios::app);
    file<<"\n\nCar: "<<make<<" "<<model<<endl;
    file<<"Horsepower: "<<horsepower<<"HP at "<<rpm<<" rpm, from "<<torque<<" pound feet of torque"<<endl;
    file<<"Quarter mile time is "<<quartermile<<" seconds at a final speed of "<<finalspeed<<" kilometers per hour"<<endl;
    file<<"Zero to sixty time is "<<zerohundred<<" seconds, with a power to weight ratio of "<<pw<<" horsepower per kilogram"<<endl;
    file<<"Maximum possible accleration: "<<acceleration<<" with a maximum G-force of "<<gforce<<" Gs."<<endl;
    cout<<"file written"<< endl;
    file.close();
  }
};

#endif

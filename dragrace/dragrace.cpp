#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "car.h"
#include "calc.cpp"
#include "create.cpp"
using namespace std;

double winningmuscle();
double musclecalc();
double supercalc();
double dragcalc();
double commutercalc();

muscle createmusclecar();
super createsupercar();
drag createdragcar();
commuter createcommutercar();

int main(){
  cout<<"BENCHRACER SIMULATOR\n____________________\n\nPress ENTER to start"<<endl;
  getchar();
  system("CLS");
  string make="car";
  string model="model";
  muscle *mus;
  super *spr;
  drag *drg;
  commuter *com;
  int num;
  int type;
    cout<<"How many cars do you want to compare?"<<endl;
    cin>>num;
    if (num<=0){
      cout<<"INVALID NUMBER OF CARS"<<endl;
      return 0;
    }
  system("CLS");
    cout<< "What type of car is this?\n  1) Muscle\n  2) Super\n  3) Drag\n  4) Commuter"<<endl;
    cin>>type;
    system("CLS");
  if (type<1||type>4)
      cout<<"ERROR, INVALID TYPE";
  int count=0;
if(type==1){
  mus = new muscle[num];
  while (count<num){
  mus[count] = createmusclecar();
  musclecalc(mus[count]);
  cout<<"\nPress enter to continue\n"<<endl;
  cin.sync();
    getchar();
  system("CLS");
  count++;
}
  muscle fastest= mus[0];
for(int i=0; i<count; i++){
  if (fastest.quartermiletime()>mus[i].quartermiletime()){
    fastest = mus[i];
  }
}
fastest.printwinner();
}


else if(type==2){
  spr = new super[num];
  while (count<num){
  spr[count] = createsupercar();
  supercalc(spr[count]);
  cout<<"\nPress enter to continue\n"<<endl;
  cin.sync();
    getchar();
  system("CLS");
  count++;
}
super fastest= spr[0];
for(int i=0; i<count; i++){
if (fastest.quartermiletime()>spr[i].quartermiletime()){
  fastest = spr[i];
  }
}
fastest.printwinner();
}


else if (type==3){
  drg = new drag[num];
  while (count<num){
  drg[count] = createdragcar();
  dragcalc(drg[count]);
  cout<<"\nPress enter to continue\n"<<endl;
  cin.sync();
    getchar();
  system("CLS");
  count++;
  }
  drag fastest= drg[0];
for(int i=0; i<count; i++){
  if (fastest.quartermiletime()>drg[i].quartermiletime()){
    fastest = drg[i];
  }
}
fastest.printwinner();
}

else if (type==4){
  com = new commuter[num];
  while (count<num){
  com[count] = createcommutercar();
  commutercalc(com[count]);
  cout<<"\nPress enter to continue\n"<<endl;
  cin.sync();
    getchar();
  system("CLS");
  count++;
}
commuter fastest= com[0];
for(int i=0; i<count; i++){
if (fastest.quartermiletime()>com[i].quartermiletime()){
  fastest = com[i];
  }
}
fastest.printwinner();
}

else if (type<1||type>4){
  return 0;
}
return 0;

return 0;
  }

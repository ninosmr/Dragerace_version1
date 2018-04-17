#include "car.h"
#include <iostream>
#include <tgmath.h>
#include <fstream>
using namespace std;


double musclecalc(muscle m){
  m.calcaccel();
  m.calcpower();
  m.powertoweight();
  m.zeroto100();
  m.quartermiletime();
  m.qmvelocity();
  m.speedtokmh();
  m.gforcecalc();
  m.savecar();
  m.printallstats();
  return m.quartermiletime();
}

double supercalc(super s){
  s.calcaccel();
  s.calcpower();
  s.powertoweight();
  s.zeroto100();
  s.quartermiletime();
  s.qmvelocity();
  s.speedtokmh();
  s.gforcecalc();
  s.savecar();
  s.printallstats();
  return s.quartermiletime();
}

double dragcalc(drag d){
  d.calcaccel();
  d.calcpower();
  d.powertoweight();
  d.zeroto100();
  d.quartermiletime();
  d.qmvelocity();
  d.speedtokmh();
  d.gforcecalc();
  d.savecar();
  d.printallstats();
  return d.quartermiletime();
}

double commutercalc(commuter c){
  c.calcaccel();
  c.calcpower();
  c.powertoweight();
  c.zeroto100();
  c.quartermiletime();
  c.qmvelocity();
  c.speedtokmh();
  c.gforcecalc();
  c.savecar();
  c.printallstats();
  return c.quartermiletime();
}

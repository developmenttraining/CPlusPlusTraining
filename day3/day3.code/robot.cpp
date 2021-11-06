#include "robot.h"
#include <iostream>

using namespace std;

Robot::Robot() {
	cout << " Robot yaratildi " << endl;
}
Robot::~Robot() {}
Robot::Robot(int q) : iq{ q }
{
}
void Robot::setIq(int iq)
{
	this->iq = iq;
	this->cpu = iq / 200;
}
int Robot::getIq() const {
	return iq;
}
void Robot::reset() {
	//Robot rb = Robot{};
	*this = Robot{};
}

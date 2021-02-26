#include <iostream>
#include <string>
#include "beat_functions.h"

using namespace std;

HeartBeat::HeartBeat(int m, int d, int y, string fname, string lname){

	bm = m;
	bd = d;
	by = y;
	Fname = fname;
	Lname = lname;
}

void HeartBeat::setAge(int m, int d, int y){

	bm = m;
	bd = d;
	by = y;
}

int HeartBeat::getAge(void){

	int py, pm, pd;

	cout << "Enter todays date (mm dd yyyy): ";
	cin  >> pm >> pd >> py;
	cout << endl;

	Age = py - by;

	if (bm > pm || bm == pm && bd > pd){
	     Age--;
	}

	cout << "Age: " << Age << endl;

return Age;

}

void HeartBeat::setName(string fname, string lname){

	this->Fname = fname;
	this->Lname = lname;
}

string HeartBeat::getFname(void){

return Fname;
}

string HeartBeat::getLname(void){

return Lname;
}

int HeartBeat::getHeartRateMax(void){

	Max = 220 - Age;

return Max;

}

void HeartBeat::getTargetHeartRate(int* a, int* b){

	Target1 = Max * 0.5;
	*a = Target1;

	Target2 = Max * 0.85;
	*b = Target2;

}

HeartBeat::~HeartBeat(){}

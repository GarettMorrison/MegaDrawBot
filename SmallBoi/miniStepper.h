/*
	miniStepper.h
	Simple Stepper Library
	Made by Garett Morrison
*/

#ifndef MiniStepper_H
#define MiniStepper_H

#include "Arduino.h"

class miniStepper
{
public:
	attach(int _a, int _b, int _c, int _d);
	stepUp();
	stepDown();
	int getPos();

private:
	int a;
	int b;
	int c;
	int d;

	int pos;
	int step;
};

#endif
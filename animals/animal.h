#pragma once

#include <iostream>

class Animal {
public:
	float weight;				// kg
};

class Mammal : public Animal {
public:
	float pregnancyDuration;	// days
};

class Cat : public Mammal {
public:
	float vibrissaLength;		// meters
};

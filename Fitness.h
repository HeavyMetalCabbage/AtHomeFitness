#pragma once
#include<string>

class Fitness 
{
public:
	Fitness();

	void Roll();


	void Excersises(std::string excersises[20]);


protected:
	std::string workout;
	double roll;
};

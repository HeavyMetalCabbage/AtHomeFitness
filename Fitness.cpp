#include "Fitness.h"
#include<iostream>
#include "stdlib.h"

Fitness::Fitness()
	:workout(" "), roll(0)
{
}

void Fitness::Roll()
{
	std::string excersises[20];
	Excersises(excersises);
	double roll = (rand() % 20 + 1);


	if (roll == 1)
	{
		std::cout << "You have rolled a Critical Failure!" << std::endl;
		std::cout << "You're Workout is: " << excersises[0] << std::endl;
	}

	else if (roll == 2)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[1] << std::endl;
	}

	else if (roll == 3)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[2] << std::endl;
	}

	else if (roll == 4)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[3] << std::endl;
	}

	else if (roll == 5)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[4] << std::endl;
	}

	else if (roll == 6)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[5] << std::endl;
	}

	else if (roll == 7)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[6] << std::endl;
	}

	else if (roll == 8)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[7] << std::endl;
	}

	else if (roll == 9)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[8] << std::endl;
	}

	else if (roll == 10)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[9] << std::endl;
	}

	else if (roll == 11)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[10] << std::endl;
	}

	else if (roll == 12)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[11] << std::endl;
	}

	else if (roll == 13)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[12] << std::endl;
	}

	else if (roll == 14)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[13] << std::endl;
	}

	else if (roll == 15)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[14] << std::endl;
	}

	else if (roll == 16)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[15] << std::endl;
	}

	else if (roll == 17)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[16] << std::endl;
	}

	else if (roll == 18)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[17] << std::endl;
	}

	else if (roll == 19)
	{
		std::cout << "You rolled a " << roll << std::endl;
		std::cout << "You're Workout is: " << excersises[18] << std::endl;
	}

	else if (roll == 20)
	{
		std::cout << "You have rolled a Critical Success! A Natural 20" << std::endl;
		std::cout << "You're Workout is: " << excersises[19] << std::endl;
	}


}

void Fitness::Excersises(std::string workouts[20])
{
	std::string workout;
	std::cout << "Please enter your type of workout either Upper or Lower body: ";
	std::cin >> workout;

	if (workout == "Upper" || workout == "upper")
	{
		workouts[0] = "One Arm Push-Up x15 3 Sets";
		workouts[1] = "Clap Push-Up x15 3 Sets";
		workouts[2] = "Circular Archer Push-Up x15 3 Sets";
		workouts[3] = "Close Grip Push-Up x15 3 Sets";
		workouts[4] = "Half to Full Push-Up x15 3 Sets";
		workouts[5] = "Archer Push-Ups x15 3 Sets";
		workouts[6] = "Dragon Walk x10 3 Sets";
		workouts[7] = "One-Leg Push-Up x15 3 Sets";
		workouts[8] = "Supine Push-Up x15 3 Sets";
		workouts[9] = "Half Push-Up Hold(20 Sec) x10 3 sets";
		workouts[10] = "Tricep Dip x10 3 Sets";
		workouts[11] = "Uneven Push-Ups x10 3 Sets";
		workouts[12];
		workouts[13] = "Wide Push-Up x10 3 Sets";
		workouts[14] = "Tricep Extension x10 3 Sets";
		workouts[15] = "Tricep Push-Up x10 3 Sets";
		workouts[16] = "Plank Side Walk x10 3 Sets";
		workouts[17] = "Decline Push-Up x10 3 Sets";
		workouts[18] = "Arm Circles(10 Sec) x5 2 Sets";
		workouts[19] = "Regular Push-Ups x10 3 Sets";

	}

	else if (workout == "Lower" || workout == "lower")
	{
		workouts[0] = "Wall Sit(45 Seconds) x5";
		workouts[1] = "Flutter Kicks(45 Sec) x 4";
		workouts[2] = "Bycicle Kicks(45 Sec) x 4";
		workouts[3] = "Squat Jumps x15 3 Sets" ;
		workouts[4] = "Wall Squats(Hold for 5 Sec) x15 3 Sets";
		workouts[5] = "Cherry Picker x15 3 Sets";
		workouts[6] = "Moutain Climbers x10 3 Sets";
		workouts[7] = "Sumo Squat x15 3 Sets";
		workouts[8] = "Side Leg Raise Plank x15 3 Sets";
		workouts[9] = "Crunches x20 3 Sets";
		workouts[10] = "Lunge x10 3 Sets";
		workouts[11] = "Superman (30 Sec) x5 3 Sets";
		workouts[12] = "Deep Lunges x10 3 Sets";
		workouts[13] = "Leg Extensions x10 3 Sets";
		workouts[14] = "Squad Side Kick x10 3 Sets";
		workouts[15] = "Squats x10 3 Sets";
		workouts[16] = "Leg Lifts x10 3 Sets";
		workouts[17] = "Alternating Leg Lifts x10 3 Sets";
		workouts[18] = "Laterl Leg Lifts x10 3 Sets";
		workouts[19] = "Sit-Ups x10 3 Sets";

	}

	else
	{
		std::cout << "Please enter either Upper or Lower!" << std::endl;
	}
}

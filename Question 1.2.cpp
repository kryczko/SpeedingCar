/*This program prompts the user for a weight of a moving car in pounds
and then computes if the car was speeding prior to the collison.*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Declaring the variables for the momentum calculation
  	double mass1, mass2(2000), final_velocity(30), initial_velocity;

	//Prompts the user to enter the weight of the vehicle
	cout << "Please enter the weight of the moving vehicle in pounds:";
	cin >> mass1;

	//Converts the masses and velocities into SI units for the
	//momentum calculation
	mass1 = mass1 * 0.4536;
	mass2 = mass2 * 0.4536;
	final_velocity = final_velocity * 0.447;

	//Conservation of momentum for an inelastic collision between the
	//two cars to find the intial velocity of the moving car
	initial_velocity = ((mass1 + mass2) * final_velocity) / mass1;

	//Converts the SI unit of velocity into miles per hour
	initial_velocity = initial_velocity / 0.447;

	//If statement to determine whether the vehicle was speeding
	string decision;
	if (initial_velocity <= 65)
	{
		decision = " not speeding.";
	}
	else
	{
		decision = " speeding.";
	}
	
	//Prints whether the car was speeding or not
	cout << "\n\nThe initial velocity of the car was " << initial_velocity << " miles per hour and\ntherefore the vehicle was" << decision << "\n\n\n";

	//Terminate the program
	system("pause");
	return 0;
}

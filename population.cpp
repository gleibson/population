//Exercise from the Book C++ Primer Plus page 112 number 6
//porcent of world the population and the population from usa  

#include <iostream>

int main()
{
	long double world_population;
	long double usa_population;
	

	std::cout << "Enter the world's population: " << std::endl;
	std::cin >> world_population;
	std::cout << "Enter the population of the US: " << std::endl;
	std::cin >> usa_population;


	long double percent = usa_population * 100;
	long double usa_population_percent = percent / world_population;


	std::cout << "The population of the USA is " << usa_population_percent << "% of the world population." << std::endl;

	return 0;


}

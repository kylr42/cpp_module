//
// Created by Jimbo Siona on 12/13/21.
//

#include "Span.hpp"

int	main()
{
	Span				sp = Span(50);
	std::vector<int>	vec;

	for (int i = 0; i < 12; i++)
		vec.push_back(i);
	try
	{

		sp.addNumber(vec.begin(), vec.end());
		sp.addNumber(5);
//		sp.addNumber(11);
//		sp.addNumber(40);
		std::cout << sp << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Span spn = sp;
	try
	{
		std::cout << "Longest: " << spn.longestSpan() << std::endl;
		std::cout << "Shortest: " << spn.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

#include "../include/classGenerator.h"

int	main(int ac, char **av)
{
	vector <string> parameters(av + 1, av + ac);
	if (!isValidParameters(parameters))
		return (1);

	Flags	flags(parameters);

	if (flags.helpMode())
		printHelp();
	else
		classGenerator(getClassesNames(parameters), flags);
	return (0);
}
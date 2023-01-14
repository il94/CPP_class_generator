#include "../include/classGenerator.h"

static int	isValidFlags(vector <string> &parameters)
{
	for (int i = 0; i < parameters.size(); i++)
	{
		if (parameters[i].find("--", 0) != -1)
		{
			if (parameters[i].find("compare", 2) == -1 and
				parameters[i].find("arithmetic", 2) == -1 and
				parameters[i].find("assign", 2) == -1 and
				parameters[i].find("stream", 2) == -1 and
				parameters[i].find("no-menu", 2) == -1 and
				parameters[i].find("help", 2) == -1)
			{
				cout << "Option " << parameters[i] << " not found" << endl;
				return (0);
			}
		}
	}
	return (1);
}

static int	isClassName(vector <string> &parameters)
{
	for (int i = 0; i < parameters.size(); i++)
	{
		if (parameters[i].find("--", 0) == -1)
			return (1);
	}
	cout << "Please enter a class name" << endl;
	return (0);
}

static int	isParameters(int nbParameters)
{
	if (nbParameters)
		return (1);
	cout << "Please enter parameters" << endl;
	return (0);
}

int	isValidParameters(vector <string> parameters)
{
	if (not isParameters(parameters.size()) or not isClassName(parameters)
		or not isValidFlags(parameters))
		return (0);
	return (1);
}
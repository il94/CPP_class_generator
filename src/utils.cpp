#include "../include/classGenerator.h"

vector <string>	getClassesNames(vector <string> parameters)
{
	vector	<string> result;

	for (int i = 0; i < parameters.size(); i++)
	{
		if ((int)parameters[i].find("--") == -1)
			result.push_back(parameters[i]);
	}
	return (result);
}

string	capitalizer(string src)
{
	string	result = src;

	result.at(0) = toupper(result.at(0));
	for (int i = 1; i < src.size(); i++)
		result.at(i) = tolower(result.at(i));
	return (result);
}

string	strToUpper(string src)
{
	string	result = src;

	for (int i = 0; i < src.size(); i++)
		result.at(i) = toupper(result.at(i));
	return (result);
}
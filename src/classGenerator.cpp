#include "../include/classGenerator.h"

void	printHelp( void )
{
	cout << "Usage : ./generator [--options] [classe names] (in any order)" << endl;
	cout << "Options list :" << endl;
	cout << "	--compare\t\tget comparison operators" << endl;
	cout << "	--arithmetic\t\tget arithmetic operators" << endl;
	cout << "	--assign\t\tget assignation operators" << endl;
	cout << "	--stream\t\tget stream operators" << endl;
	cout << "	--no-titles\t\tget class files without titles" << endl;
	cout << "	--help\t\t\tshow this message" << endl;
}

void	classGenerator(vector <string> classes, Flags flags)
{
	string	name;

	for (int i = 0; i < (int)classes.size(); i++)
	{
		name = capitalizer(classes[i]);
		{
			ofstream	header(name + ".hpp");
			generateHeaderFile(header, name, flags);
			header.close();
		}
		{
			ofstream	source(name + ".cpp");
			generateSourceFile(source, name, flags);
			source.close();
		}
	}
}
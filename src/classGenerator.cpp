#include "../include/classGenerator.h"

void	printHelp( void )
{
	cout << "Usage : ./generator [--options] [classe names] (in any order)" << endl;
	cout << "Options list :" << endl;
	cout << "	--compare\t\tobtain comparison operators" << endl;
	cout << "	--arithmetic\t\tobtain arithmetic operators" << endl;
	cout << "	--assign\t\tobtain assignation operators" << endl;
	cout << "	--stream\t\tobtain stream operators" << endl;
	cout << "	--no-menu\t\tget class files without heading" << endl;
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
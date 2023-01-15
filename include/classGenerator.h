#ifndef CLASS_GENERATOR_H
#define CLASS_GENERATOR_H

#include <iostream>
#include <vector>
#include <fstream>

#include "Flags.hpp"

using namespace std;

/* utils.cpp */
vector <string>	getClassesNames(vector <string> parameters);
string			capitalizer(string src);
string			strToUpper(string src);

/* sourceGenerator.cpp */
void			generateSourceFile(ofstream &sourceStream, string &src, Flags &flags);

/* headerGenerator.cpp */
void			generateHeaderFile(ofstream &headerStream, string &src, Flags &flags);

/* classGenerator.cpp */
void			printHelp( void );
void			classGenerator(vector <string> classes, Flags flags);

/* parsing.cpp */
int				isValidParameters(vector<string> parameters);

/* main.cpp */
int				main(int ac, char **av);
#endif
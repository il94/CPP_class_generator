#include "../include/classGenerator.h"

/*=============================== Constructors ===============================*/

Flags::Flags(vector<string> parameters) : _compare(false),
											_arithmetic(false),
											_assign(false),
											_stream(false), 
											_noTitles(false),
											_help(false) {
	for (int i = 0; i < parameters.size(); i++)
	{
		if (parameters[i] == "--compare")
			_compare = true;
		else if (parameters[i] == "--arithmetic")
			_arithmetic = true;
		else if (parameters[i] == "--assign")
			_assign = true;
		else if (parameters[i] == "--stream")
			_stream = true;
		else if (parameters[i] == "--no-titles")
			_noTitles = true;
		else if (parameters[i] == "--help")
			_help = true;
	}
}

Flags::Flags() : _compare(false), _arithmetic(false), _assign(false),
				_stream(false), _noTitles(false), _help(false) {}

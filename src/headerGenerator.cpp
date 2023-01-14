#include "../include/classGenerator.h"

void	generateHeaderFile(ofstream &headerStream, string &src, Flags &flags)
{
	headerStream <<	"#ifndef " + strToUpper(src) + "\n";
	headerStream <<	"#define " + strToUpper(src) + "\n\n";

	headerStream <<	"#include <iostream>\n\n";

	headerStream <<	"class " + src + "\n";
	headerStream <<	"{\n";
	headerStream <<	"	public :\n\n";
		
	if (flags.getMenu())
		headerStream <<	"	/* Constructors */\n";
	headerStream <<	"	" + src + "();\n";
	headerStream <<	"	" + src + "(const " + src + "&);\n";
	headerStream <<	"	~" + src + "();\n\n";

	if (flags.getMenu())
		headerStream <<	"	/* Overloads */\n";
	headerStream <<	"	" + src + "&	operator=(const " + src + "&);\n\n";

	if (flags.getCompareOverload())
	{
		headerStream <<	"	bool	operator>(const " + src + " &factor) const;\n";
		headerStream <<	"	bool	operator<(const " + src + " &factor) const;\n";
		headerStream <<	"	bool	operator>=(const " + src + " &factor) const;\n";
		headerStream <<	"	bool	operator<=(const " + src + " &factor) const;\n";
		headerStream <<	"	bool	operator==(const " + src + " &factor) const;\n";
		headerStream <<	"	bool	operator!=(const " + src + " &factor) const;\n\n";
	}

	if (flags.getArithmeticOverload())
	{
		headerStream <<	"	" + src + "	operator+(const " + src + " &factor) const;\n";
		headerStream <<	"	" + src + "	operator-(const " + src + " &factor) const;\n";
		headerStream <<	"	" + src + "	operator*(const " + src + " &factor) const;\n";
		headerStream <<	"	" + src + "	operator/(const " + src + " &factor) const;\n";
		headerStream <<	"	" + src + "	operator%(const " + src + " &factor) const;\n\n";
	}

	if (flags.getAssignOverload())
	{
		headerStream <<	"	" + src + "&	operator+=(const " + src + " &factor);\n";
		headerStream <<	"	" + src + "&	operator-=(const " + src + " &factor);\n";
		headerStream <<	"	" + src + "&	operator*=(const " + src + " &factor);\n";
		headerStream <<	"	" + src + "&	operator/=(const " + src + " &factor);\n";
		headerStream <<	"	" + src + "&	operator%=(const " + src + " &factor);\n\n";

		headerStream <<	"	" + src + "&	operator++( void );\n";
		headerStream <<	"	" + src + "	operator++( int );\n";
		headerStream <<	"	" + src + "&	operator--( void );\n";
		headerStream <<	"	" + src + "	operator--( int );\n\n";
	}

	if (flags.getMenu())
	{
		headerStream <<	"	/* Methods */\n	\n\n";

		headerStream <<	"	/* Accessors */\n	\n\n";
	}

	headerStream <<	"	private :\n\n";

	if (flags.getMenu())
	{
		headerStream <<	"	/* Attributes */\n	\n\n";
	}

	headerStream <<	"};\n\n";

	headerStream <<	"std::ostream&	operator<<(std::ostream &flow, " + src + " const &value);\n";
	if (flags.getStreamOverload())
		headerStream <<	"std::istream&	operator>>(std::istream &flow, " + src + " const &value);\n";
	headerStream <<	"\n";
	headerStream <<	"#endif";
}

#include "../include/classGenerator.h"

void	generateSourceFile(ofstream &sourceStream, string &src, Flags &flags)
{
	sourceStream <<	"#include \"" + src + ".hpp\"\n\n";

	if (flags.getMenu())
		sourceStream <<	"/*=============================== Constructors ===============================*/\n\n";

	sourceStream <<	src + "::" + src + "(){\n";
	sourceStream <<	"}\n\n";

	sourceStream <<	src + "::" + src + "(const " + src + " &src){\n";
	sourceStream <<	"	*this = src;\n";
	sourceStream <<	"}\n\n";

	sourceStream <<	src + "::~" + src + "(){\n";
	sourceStream <<	"}\n\n";

	if (flags.getMenu())
		sourceStream <<	"/*================================ Overloads =================================*/\n\n";

	sourceStream <<	src + "& " + src + "::operator=(const " + src + " &src)\n";
	sourceStream <<	"{\n";
	sourceStream <<	"}\n\n";

	if (flags.getCompareOverload())
	{
		sourceStream <<	"bool	" + src + "::operator>(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	"bool	" + src + "::operator<(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	"bool	" + src + "::operator>=(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	"bool	" + src + "::operator<=(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	"bool	" + src + "::operator==(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	"bool	" + src + "::operator!=(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";
	}

	if (flags.getArithmeticOverload())
	{
		sourceStream <<	src + "	" + src + "::operator+(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "	" + src + "::operator-(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "	" + src + "::operator*(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "	" + src + "::operator/(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "	" + src + "::operator%(const " + src + " &factor) const\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";
	}

	if (flags.getAssignOverload())
	{
		sourceStream <<	src + "&	" + src + "::operator+=(const " + src + " &factor)\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "&	" + src + "::operator-=(const " + src + " &factor)\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "&	" + src + "::operator*=(const " + src + " &factor)\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "&	" + src + "::operator/=(const " + src + " &factor)\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "&	" + src + "::operator%=(const " + src + " &factor)\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";


		sourceStream <<	src + "&	" + src + "::operator++( void )\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "	" + src + "::operator++( int )\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "&	" + src + "::operator--( void )\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";

		sourceStream <<	src + "	" + src + "::operator--( int )\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";
	}

	if (flags.getMenu())
		sourceStream <<	"/*================================= Methods ==================================*/\n\n\n\n";

	if (flags.getMenu())
		sourceStream <<	"/*================================ Accessors =================================*/\n\n\n";

	if (flags.getStreamOverload())
	{
		sourceStream <<	"\n\n";
		sourceStream <<	"std::ostream&	operator<<(std::ostream &flow, " + src + " const &value)\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n\n";
		sourceStream <<	"std::istream&	operator>>(std::istream &flow, " + src + " const &value)\n";
		sourceStream <<	"{\n";
		sourceStream <<	"}\n";
	}
}

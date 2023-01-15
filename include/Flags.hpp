#ifndef FLAGS
#define FLAGS

using namespace std;

class Flags
{
	public :

	/* Constructors */
	Flags(vector<string> parameters);

	/* Methods */
	bool	getCompareOverload( void ) { return _compare; }
	bool	getArithmeticOverload( void ) { return _arithmetic; }
	bool	getAssignOverload( void ) { return _assign; }
	bool	getStreamOverload( void ) { return _stream; }
	bool	getTitles( void ) { return not _noTitles; }
	bool	helpMode( void ) { return _help; }

	private :

	Flags();

	/* Attributes */
	bool	_compare;
	bool	_arithmetic;
	bool	_assign;
	bool	_stream;
	bool	_noTitles;
	bool	_help;
};

#endif
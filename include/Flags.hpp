#ifndef FLAGS
#define FLAGS

using namespace std;

class Flags
{
	public:

	Flags(vector<string> parameters);
	~Flags();

	bool	getCompareOverload( void ) { return _compare; }
	bool	getArithmeticOverload( void ) { return _arithmetic; }
	bool	getAssignOverload( void ) { return _assign; }
	bool	getStreamOverload( void ) { return _stream; }
	bool	getMenu( void ) { return not _noMenu; }
	bool	helpMode( void ) { return _help; }

	private:

	Flags();

	bool	_compare;
	bool	_arithmetic;
	bool	_assign;
	bool	_stream;
	bool	_noMenu;
	bool	_help;
};

#endif
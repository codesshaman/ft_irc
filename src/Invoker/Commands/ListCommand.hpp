#ifndef ListCommand_hpp
# define ListCommand_hpp
# include "../Command.hpp"

using namespace std;

class ListCommand: public Command {
	public:
		ListCommand();
		virtual ~ListCommand();
		void execute();
};

#endif

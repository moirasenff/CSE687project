
#ifdef REDUCER_EXPORTS
#define REDUCER_API __declspec(dllexport)
#else
#define REDUCER_API __declspec(dllimport)
#endif



#include "Trie.hpp"


class REDUCER_API Reducer {
	std::string mOutDir;
public:
	// constructor takes in the out path
	Reducer(std::string);
	// reduces the trie into a word and key (quantity) and calls export
	bool reduce(Trie*);
};
/* 
   LearnIt - A C program to:
 	Read shit off the web.
        Do Natural Language Processing to understand written structure.
        Build a neural map of relationships between nouns/objects and hopefully learn new connected relations.
	Have a reputation system for determining 'truthfulness' of facts.
	Allow for a 'parental' figure to ensure morals via fact-check. (95-100% reputation factor)
        Store information in database.
	Load database on startup - go into learn mode
	Have a query engine/processor.
	Have a personality/info sharing 'posting' engine that attempts to share strongly held beliefs.
*/
#include <iostream>
using namespace std;

//A section will go here to include all of the header files for my
//personal classes that I create
//Starting examples of classes we'll need will be:
//The Brain Class - a class that will be linked to the bot's brain of memories
//memory class - used by the brain class, but refers to specific memories (and properties thereof)
//web interface class - used to connect to the web
//search engine class - used to create search queries within the brain itself
//source class - used to store information about sources, including reputation data
//Note: source may have relationships between sources so that reputation is linked to 'group' reputations as well.
//Utility class - a class that contains any reusable code that will go into another class in the future
#include "linkType.h"
#define defaultURL = "http://www.livin3.com/50-cool-and-weird-fun-facts-that-you-should-know"

int main(int argc, char* argv[]) {

	// I think that we'll start out with a simple 'create a new Brain'
	// followed by connect to a given URL and attempt to find simple statements to process (noun verb adj).

        //myBrain = new cBrain();
	//myConnector = new cConnector();
	//myConnector.interpret(defaultURL);

	cerr << "Loading my Brain" << endl;
	return 0;
}

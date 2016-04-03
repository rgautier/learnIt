// linkType.h
#ifndef LINKTYPE_H
#define LINKTYPE_H

#include <string>
using namespace std;

class cLinkType {
// A link type talks about the properties of how something is associated
// The default linktype is JUST that they're associated somehow - doesn't say how.
// Should also have a strength of association.
// Methods may cement or weaken the relationship or remove it altogether

	int strength;
	string verb;

	public:
	cLinkType(int str,string inverb);
        cLinkType();
};

#endif


#include <string>
#include "cLinkType.h"

cLinkType:cLinkType(int str, string inverb) {
	strength = str;
	verb = inverb;
}

cLinkType:cLinkType() {
	verb = "is associated with";
	strength = 10;
}

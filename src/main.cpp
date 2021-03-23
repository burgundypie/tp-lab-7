#include <iostream>
#include "../include/ocean.h"

int main() 
{
	Ocean* oc = new Ocean;
	oc->addObjects(3000, ObjType::PREY);
	oc->addObjects(1500, ObjType::PREDATOR);
	oc->addObjects(1000, ObjType::STONE);
	oc->run();
	// sleep(2000);
	return 0;
}

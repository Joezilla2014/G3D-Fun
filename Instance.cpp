#include <G3DAll.h>
#include "Instance.h"

std::string name;
Instance* parent;
static std::string className = "Instance";

Instance::Instance(void)
{
	name = "Default Game Instance";
	className = "Part";
}

Instance::~Instance(void)
{
	name = "Default Game Instance";
}





#include "template_lib.h"
#include "template_app.h"
int main()
{
	Library * lib = new Application();
	lib->Run();
	delete lib;
	return 0;
}
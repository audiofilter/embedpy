#include "Python.h"
#include <iostream>

int main(int argc,const char *argv[]) {
	Py_Initialize();
	PyRun_SimpleString("import sys");
	PyRun_SimpleString("print sys.path");
	PyRun_SimpleString("import matplotlib");
	PyRun_SimpleString("matplotlib.use('qt4agg')");
	PyRun_SimpleString("import matplotlib.pyplot as plt");
	PyRun_SimpleString("plt.plot(range(5))");
	PyRun_SimpleString("plt.savefig('try.png', bbox_inches='tight')");
	PyRun_SimpleString("plt.show()");
	// Wait for input
	std::cin.ignore();
	Py_Exit(0);
	return 0;
}

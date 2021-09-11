#ifndef VIEW_H
#define VIEW_H

#include <iostream>
#include <stdlib.h>
#include "Acta.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

class View{
private:
	Acta Acta;

public:		
	View();
	void mostrarMenu();
};

#endif
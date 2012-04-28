
#include <iostream>
#include <stdlib.h>

#include "option.h"


int main(int argc, char **argv)
{
	Coption opt;
	opt.start(argc, argv);

	std::cout<<"test:"<<opt.m_iDiffTyp<<"\n";

	return(EXIT_SUCCESS);
}

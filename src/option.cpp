#include <unistd.h>
#include <getopt.h>

#include "option.h"

Coption::Coption()
	: m_iDiffTyp(eNoOpt)
{
}

int Coption::start(int argc, char **argv)
{
	// Vilka argoment kan hanteras (De som har : efter kräver ett argument)
	char option_def_short[] = "mh";

	// koplar namn till argument så man kan skriva -b eller --baud
	struct option option_def_long[] = 
	{
		{ "md5",0, 0, 'm' },
		{ "help",0, 0, 'h' },
		{  0,  0, 0,  0  }
	};
	int command_index = 0;

	int option_char;

	while((option_char = getopt_long(argc,argv,option_def_short, option_def_long,&command_index)) != -1)
	switch(option_char)
	{
	case 'm':
		m_iDiffTyp = eMd5;
	break;

	case 'h':
	 return -1;
	break;
	}

	return 0;	
}


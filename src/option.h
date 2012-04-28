
#ifndef OPTION_H
#define OPTION_H

class Coption
{
public:
	enum DiffTyp { eNoOpt, eMd5, eMd5Start };

	Coption();

	int start(int argc, char **argv);

	int m_iDiffTyp;
};

#endif  // OPTION_H


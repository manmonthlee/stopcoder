#include <fstream>
#include "algorithm.h"


Algorithm::Algorithm() { value = 0; };
Algorithm::~Algorithm() {};

int Algorithm::solution(const char * ipath, const char *opath)
{
	return 0;
}

int main(int argc, char * argv[])
{
	Algorithm alg;	
	
	alg.solution("./input.txt", "./output.txt");
	
	return 0;
}

#include"cir.h"
#include <iostream>

using namespace std; 

int main(int argc, char** argv)
{

	string wordcount = argv[1];

	myFile file(wordcount);
	file.get_all();
	return 0;
}

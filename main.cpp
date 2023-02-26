#include <iostream>
#include "add.h"
#include "./dir/sub.h"

int main(int argc, char* argv[])
{
	std::cout << "main" << std::endl;
	std::cout << "1+1: " << myadd(1, 1) << std::endl;
	std::cout << "3-1: " << mysub(3, 1) << std::endl;

	return 0;
}

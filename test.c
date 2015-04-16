/* Miguel Quime
	Lab 0 Base Converter
	Survey of Computer Science
	April 2, 2015
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "functions.h"
#include "test.h"


int main(void)
{
	test_convert_bases();
	puts("testing complete");
	return 0;
}

int test_convert_bases()
{
		assert(convert_bases("1100", 2, 10)=="12");
		assert(convert_bases("C", 16, 2 )=="1100");
		assert(convert_bases("10", 10, 2) == "1010");
		assert(convert_bases("A3", 16, 2)=="10100011");
}



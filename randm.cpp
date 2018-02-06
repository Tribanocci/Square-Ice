
//==================================================================================================================
//=================================================NOTATION=========================================================
// 1 u r
// 2 u l
// 3 d r
// 4 d l
// 5 u d
// 6 l r
//==================================================================================================================
//==================================================================================================================

#include "/home/tribonacci/Documents/Square-Ice/mainice.h"

int randpos(){

	int j = rand() %(HEIGHT*WIDTH);  // j get a random value between 0 and maxrand
return j;
}

int randstat(){

	int j = (rand() %(6) +1) ;  // j get a random value between1 and maxrand6
return j;
}


float randprob(){
	
float r = ((double) rand() / (RAND_MAX));
 return r;
}


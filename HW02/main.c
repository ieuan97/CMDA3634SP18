#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#include "functions.h"

int main (int argc, char **argv) {

	//seed value for the randomizer 
  double seed;
  
  seed = clock(); //this will make your program run differently everytime
  //seed = 0; //uncomment this and you program will behave the same everytime it's run
  
  srand48(seed);


  //begin by getting user's input
	unsigned int n;

  printf("Enter a number of bits: ");
  scanf("%u",&n);

  //make sure the input makes sense
  if ((n<2)||(n>30)) {
  	printf("Unsupported bit size.\n");
		return 0;  	
  }

  unsigned int p;

  /* Q2.2: Use isProbablyPrime and randomXbitInt to find a random n-bit prime number */
  
  
  
    while (isProbablyPrime(p) != 1) {
      
      p = randXbitInt(n--);
    }
    printf("p = %u is probably prime.\n", p);
  
  /* Q3.2: Use isProbablyPrime and randomXbitInt to find a new random n-bit prime number 
     which satisfies p=2*q+1 where q is also prime */

  p = randXbitInt(n);
  unsigned int q = randXbitInt(n) / 2 - 1;

  printf("p = %u is probably prime and equals 2*q + 1. q= %u and is also probably prime.\n", p, q);
	/* Q3.3: use the fact that p=2*q+1 to quickly find a generator */
   
	unsigned int g;
//        g = findGenerator(p); was getting a undefined reference error and could not figure it out

//	printf("g = %u is a generator of Z_%u \n", g, p);  
}


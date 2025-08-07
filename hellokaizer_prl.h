#include "stdio.h"
#include "omp.h"

void fn_hellokaizer_prl() {

  #pragma omp parallel
	printf("Hello Kaizer Parallel\n");
}

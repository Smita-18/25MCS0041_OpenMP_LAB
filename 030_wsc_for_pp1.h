#include <stdio.h>
#include <omp.h>

void fn_wsc_for_2constructs() {

	int i;
	#pragma omp parallel 
	{
	printf("Thread %d :Work Sharing Starts\n", omp_get_thread_num());
	#pragma omp for
	for (i = 0; i <= 15; i++) {

		printf("Hello Kaizer in iteration : %d printed by Thread Id : %d\n", i, omp_get_thread_num());

	}//end of for
	}

}//end of fn_wsc_for_2constructs


void fn_wsc_for_1constructs() {

	int i;
	#pragma omp parallel for
		for (i = 0; i <= 15; i++) {

			printf("Hello Kaizer in iteration : %d printed by Thread Id : %d\n", i, omp_get_thread_num());

		}//end of for


}//end of fn_wsc_for_1constructs

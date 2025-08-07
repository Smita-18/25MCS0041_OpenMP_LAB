#include <stdio.h>
#include <cstdlib>
#include "ret_et_hellokaizer.h"
#include "ret_tid_hellokaizer.h"




int fn_mnudrvprg_020_runtime_environment_routines() {
	int choice;
	while (1) {
		printf("\n\n------------ Menu Driven Program ------------");
		printf("\n\n1. Hello Kaizer serial program for Runtime Environment Routines \n");
		printf("2. Hello Kaizer parallel program for Runtime Environment Routines \n");
		printf("3. Hello Kaizer parallel program for Thread ID\n");
		printf("4. Hello Kaizer parallel program for Thread ID\n");
		printf("5. Exit \n");
		printf("Enter Your Choice\n");
		scanf_s("%d", &choice);

		switch (choice) {

		case 1:printf("\nThis is the output of Hello Kaizer serial program for Runtime Environment \n");
			fn_ret_et_hellokaizer_srl();
			break;

		case 2:printf("\nThis is the output of Hello Kaizer parallel program for Runtime Environment \n");
			fn_ret_et_hellokaizer_prl();
			break;

		case 3:printf("\nThis is the output of Hello Kaizer parallel program for Thread ID  \n");
			fn_ret_tid_hellokaizer_srl();
			break;

		case 4:printf("\nThis is the output of Hello Kaizer parallel program for Thread ID \n");
			fn_ret_tid_hellokaizer_prl();
			break;

		case 5: printf("\nYou opted Exit program \n");
			exit(0);

		default:printf("\nOpted wrong choice\n");
			break;

		}//end of switch

	}// end of while

	return 0;
}

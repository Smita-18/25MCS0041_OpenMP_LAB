#include <stdio.h>
#include <cstdlib>
#include "hellokaizer_srl.h"
#include "hellokaizer_prl.h"



int fn_mnudrvprg_010_parallel_construct() {
	int choice;
	while (1) {
		printf("\n\n------------ Menu Driven Program ------------");
		printf("\n\n1. Hello Kaizer serial program \n");
		printf("2. Hello Kaizer parallel program \n");
		printf("3. Exit \n");
		printf("Enter Your Choice\n");
		scanf_s("%d", &choice);

		switch (choice) {

		case 1:printf("\nThis is the output of Hello Kaizer serial program \n");
			fn_hellokaizer_srl();
			break;

		case 2:printf("\nThis is the output of Hello Kaizer parallel program \n");
			fn_hellokaizer_prl();
			break;
		
		case 3: printf("\nYou opted Exit program \n");
			    exit(0);

		default:printf("\nOpted wrong choice\n");
			break;

		}//end of switch

	}// end of while

	return 0;
}

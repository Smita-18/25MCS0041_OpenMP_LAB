#include <stdio.h>
#include <omp.h>
#include "run_time_environment_routines.h"

int fn_mnudrvprg_021_runtime_environment_routines() {
    int choice;

    while (1) {
        printf("\n//-------- OpenMP Runtime Environment Routines Menu --------//\n");
        printf("1. omp_set_num_threads\n");
        printf("2. omp_get_num_threads\n");
        printf("3. omp_get_max_threads\n");
        printf("4. omp_get_thread_num\n");
        printf("5. omp_get_num_procs\n");
        printf("6. omp_in_parallel\n");
        printf("7. omp_set_dynamic\n");
        printf("8. omp_get_dynamic\n");
        printf("9. omp_set_nested\n");
        printf("10. omp_get_nested\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf_s("%d", &choice);
        printf("\n");

        switch (choice) {
        case 1:
            fn_rter_omp_set_num_threads();
            break;
        case 2:
            fn_rter_omp_get_num_threads();
            break;
        case 3:
            fn_rter_omp_get_max_threads();
            break;
        case 4:
            fn_rter_omp_get_thread_num();
            break;
        case 5:
            fn_rter_omp_get_num_procs();
            break;
        case 6:
            fn_rter_omp_in_parallel();
            break;
        case 7:
            fn_rter_omp_set_dynamic();
            printf("[omp_set_dynamic] Dynamic adjustment enabled.\n");
            break;
        case 8:
            fn_rter_omp_get_dynamic();
            break;
        case 9:
            fn_rter_omp_set_nested();
            printf("[omp_set_nested] Nested parallelism enabled.\n");
            break;
        case 10:
            fn_rter_omp_get_nested();
            break;
        case 0:
            printf("Exiting the program...\n");
            return 0;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

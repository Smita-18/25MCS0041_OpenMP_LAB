#include <stdio.h>
#include <omp.h>

void fn_ret_tid_hellokaizer_srl() {
    printf("Hello Kaizer Printed by Thread Id : %d\n", omp_get_thread_num());
}

void fn_ret_tid_hellokaizer_prl() {
#pragma omp parallel
    printf("Hello Kaizer Printed by Thread Id : %d\n", omp_get_thread_num());
}

#include <stdio.h>
#include <omp.h>

int main(int argc, char** argv){
    printf("Hello from process id: %d\n", omp_get_thread_num());
    return 0;
}

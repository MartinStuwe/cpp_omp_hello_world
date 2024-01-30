#include <stdio.h>
#include <omp.h>

int main(int argc, char** argv){
    int thread_id;
    int counter = 0;

    #pragma omp parallel private(thread_id) shared(counter)
    {
        thread_id = omp_get_thread_num();
        #pragma omp critical
        {
        counter += 1;
        printf("Hello from process id: %d\nMy counter is: %d\n", thread_id, counter);
        }
    }
}

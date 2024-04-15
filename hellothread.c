#include <stdio.h>
#include <pthread.h>

//run_func 
void *run_func(void *arg) {
    char* thread_name = (char*) arg;
    for(int i = 0; i < 5; i++) {
        printf("%s: %d\n", thread_name, i);
    }
    return NULL;
}

int main() {
    printf("Launching threads\n");

    pthread_t thread1, thread2;
    char* thread1_name = "thread 1";
    char* thread2_name = "thread 2";

    pthread_create(&thread1, NULL, run_func, thread1_name);
    pthread_create(&thread2, NULL, run_func, thread2_name);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Threads complete!\n");
    return 0;
}
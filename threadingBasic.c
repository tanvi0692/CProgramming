#include <pthread.h>
#include <stdio.h>
#define NUM_THREADS     5

struct thread_data{
int data;
int sum;
char *message;};

struct thread_data thread_data_array[NUM_THREADS];
 void *PrintHello(void *threadid)
 {
    long tid;
    printf("ld%",threadid);
    tid = (long)threadid;
    printf("Hello World! It's me, thread #%ld!\n", tid);
    pthread_exit(NULL);
 }

 int main (int argc, char *argv[])
 {
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;
    char rr[8]="hello";
    
    for(t=0; t<NUM_THREADS; t++){
       thread_data_array[t].data=t;
       thread_data_array[t].sum=t+1;
       thread_data_array[t].message=&rr;
       printf("In main: creating thread %ld\n", t);
       rc = pthread_create(&threads[t], NULL, PrintHello,(void *)thread_data_array[t]);
       if (rc){
          printf("ERROR; return code from pthread_create() is %d\n", rc);
          exit(-1);
       }
    }

    /* Last thing that main() should do */
    pthread_exit(NULL);
 }

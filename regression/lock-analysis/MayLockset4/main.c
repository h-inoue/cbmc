#include <pthread.h>

pthread_mutex_t lock1=PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t lock2=PTHREAD_MUTEX_INITIALIZER;

void *thread(void *arg)
{
  pthread_mutex_lock(&lock1);
}

int main()
{
  pthread_t tid;
  pthread_create(&tid, 0, thread, 0);

  pthread_mutex_lock(&lock2); 

  return 0;
}


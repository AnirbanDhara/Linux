#include <iostream>
#include <pthread.h>
#include <unistd.h>
using namespace std;

struct nums{
    int first;
    int second;
};

void *sum(void *_vargp)
{
    struct nums *vargp = (struct nums *)_vargp;
    std::cout << "I am in sum function" << std::endl;
    int *p = new int;
    *p = vargp->first + vargp->second;
    pthread_exit((void*)p);
}
int main()
{
    pthread_t thread_id;
    
    struct nums *vargp = (struct nums*)calloc(sizeof(struct nums), 1);
    
    vargp->first = 10;
    vargp->second = 4;
    
    
    pthread_create(&thread_id, NULL, sum, vargp);
    void *result = NULL;
    pthread_join(thread_id, &result);
    cout<<"result :- "<<*(int*)result<<endl;
    return 0;
   
}

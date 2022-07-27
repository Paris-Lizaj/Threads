

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <string.h>
int max,N,P;
int A[2][2]={{1,50},{400,500}};
pthread_mutex_t mut=PTHREAD_MUTEX_INITIALIZER;
void * max_thread(void * arg);

int main(int argc,char *argv[])
{
if (argc !=3) //elegxos gia ton arithmo twn orismatwn
    {
        printf("I NEED 3 EXACTLY PARAMETERS");
    exit(2);
    }
// an perasw: ./test 2 4
P=atoi(argv[1]);// 2
N=atoi(argv[2]);//4
max=A[0][0];
pthread_t pid[P];
int i;

for(i=0;i<P;i++)
    pthread_create(&pid[i],NULL,max_thread,(void *)i);

for(i=0;i<P;i++)
    pthread_join(pid[i],NULL);
printf("THE MAX NUMBER IS:%d\n",max);
}


void * max_thread(void * arg)
{
int i,j;
int id=(int)arg;
int numoflines=N/P;    //o arithmos twn grammwn
int start=id*numoflines;
int end=start+numoflines;    //8ewreiste oti to N einai akeraio pollaplasio tou p
int local_max=A[start][0];
for(i=start;i<end;i++)
for(j=0;j<N;j++)
{
    if(A[i][j]>local_max)
    local_max=A[i][j];
}

pthread_mutex_lock(&mut);
    if(local_max>max)
        max=local_max;
pthread_mutex_unlock(&mut);
return NULL;
}

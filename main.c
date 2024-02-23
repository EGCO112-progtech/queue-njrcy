#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
   int x;
// 5 x 9 x 7 x 8 2   

enqueue(&headPtr,&tailPtr,5);
x = dequeue(&headPtr,&tailPtr);


//For struct Queue
  Queue  q;
   q.headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;
  // enqueue_struct(&q,7);
  // printf("%d\n",dequeue_struct(&q));
  // printf("%d\n",dequeue_struct(&q));
  // enqueue_struct(&q,8);
  // printf("%d\n",dequeue_struct(&q));

   int i;
   

 for(i=1;i<argc;i++){

        if(strcmp(argv[i],"x")==0){
          if(q.size>=1){
            x = dequeue_struct(&q);
            printf("dequeing %d\n",x);
          }
          else printf("Empty queue\n");
        }
        else {
       enqueue_struct(&q, atoi(argv[i]));
           
        }
 }
  return 0;
}
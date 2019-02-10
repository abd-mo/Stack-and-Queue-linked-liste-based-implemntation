#include<stdio.h>
#include<stdlib.h>
#include<time.h>



//============================= stack linked liste Implementation  ===============================
typedef struct s_node
                     {
	                    int value;
	                     struct s_node *next;
                     }SNODE;

typedef struct
               {
	             SNODE *top;
               	 int size;
               }stack;


void InitializeStack(stack *ps)
                               {
	                             ps->top=NULL;
	                             ps->size=0;
                               }

void push(stack *ps,int item)
                               {
	                             SNODE *pn=(SNODE*)malloc(sizeof(SNODE));
	                             pn->value=item;
	                             pn->next=ps->top;
	                             ps->top=pn;
	                             ps->size++;

                               }

void pop (stack *ps)
                              {
//                              	int *item;

	                            SNODE *pn;
//	                            *item=ps->top->value;
	                            pn=ps->top;
	                            ps->top=ps->top->next;
	                            free(pn);
	                            ps->size--;

                             }

int StackTop (stack *ps)
                             {
                               return ps->top->value;

                            }
int StackSize(stack *ps)
                        {
	                      return ps->size;

                        }

void  ClearStack(stack *ps)
                          {
	                         SNODE *pn=ps->top;
	                         SNODE *qn=ps->top;
	                         while(pn)
						             {
		                               pn=pn->next;
	                                   free(pn);
	                                   qn=pn;
	                                 }
	                         ps->top=NULL;
	                         ps->size=0;
                          }

int IsStackEmpty(stack *ps)
                            {

							 return ps->top==NULL;

                            }


void DisplayStack(stack *ps)
                              {
	                                SNODE *p=ps->top;
	                                 while(p)
											{
		                                        printf("[%d] ",p->value);
		                                        Sleep(100);
		                                        p=p->next;
		                                    }


                               }


// == Stack sort function ==========================================================================

void SortStack(stack *A,stack *B)

							     {
	                                system("cls");
	                                printf("===[Sort a stack using a temporary stack]==============================================================>\n");
	                                InitializeStack(A);
	                                InitializeStack(B);
	                                int num,i,w,x;
	                                printf("\n\n--{A}-- Stack >>");
	                                printf("\n\n--{B}-- Stack >>");
                                    for(i=1;i<=15;i++)
	                                                  {
		                                                   printf("\n\n\n\n\n%d th number : ",i);
		                                                   scanf("%d",&num);

                                                           for(;;)
						                                         {
				                                                   if(IsStackEmpty(A))
						                                                                {
						                                                                  system("cls");
						                                                                  printf("\n===[Sort a stack using a temporary stack]==============================================================>\n");
			                                                                              push(A,num);
			                                                                              printf("\n\n--{A}-- Stack >> ");
			                                                                              DisplayStack(A);
			                                                                              printf("\n\n--{B}-- Stack >> ");
			                                                                              DisplayStack(B);
			                                                                              break;
		                                                                                }

		                                                           else
								                                        {
		                                                                  if (num<(StackTop(A)))
							                                                                    {
							                      	                                              system("cls");
							                      	                                              printf("\n===[Sort a stack using a temporary stack]==============================================================>\n");
				                                                                                  push(B,StackTop(A));
				                                                                                  pop(A);
				                                                                                  printf("\n\n--{A}-- Stack >> ");
				                                                                                  DisplayStack(A);
				                                                                                  printf("\n\n--{B}-- Stack >> ");
				                                                                                  DisplayStack(B);
			                                                                                    }

			                                                              else
									      	                                   {
			                 	                                                  system("cls");
			                 	                                                  printf("\n===[Sort a stack using a temporary stack]==============================================================>\n");
				                                                                  push(A, num);
				                                                                  printf("\n\n--{A}-- Stack >> ");
				                                                                  DisplayStack(A);
				                                                                  printf("\n\n--{B}-- Stack >> ");
				                                                                  DisplayStack(B);
				                                                                  break;
				                                                               }
		               	                                                }
		                                                         }
				                                           while (!IsStackEmpty(B))
							                                                       {
							                                                       	system("cls");
			                 	                                                  printf("\n===[Sort a stack using a temporary stack]==============================================================>\n");
			                                                                        push(A,StackTop(B));
			                                                                        pop(B);
			                                                                        printf("\n\n--{A}-- Stack >> ");
				                                                                  DisplayStack(A);
				                                                                  printf("\n\n--{B}-- Stack >> ");
				                                                                  DisplayStack(B);
			                                                                       }
								}
    printf("\n\n\n\n Stack [A] after sorting :  ");
    DisplayStack(A);
    printf("\n\n\n\nDo you Want to reverse it ? \n\n 1-Yes\t\t2-Home\n\n\n-Your choice: ");
    scanf("%d",&w);

    if(w==1)
            {
               while(!IsStackEmpty(A))
					                    {
	                                        push(B,StackTop(A));
                                            pop(A);
                                        }
                printf("\n\n\n\nStack [A] after revesing :  ");
                DisplayStack(B);

            }
	else if(w==2) Home();


    printf("\n\n\n\nDo you want To Sort another Stack ?\n \n1-Yes\t\t2-Exit\t\t3-Home\n\n\n-Your choice: ");
    scanf("%d",&x);
    switch(x)
	                  {
	      	             case 1:
	      	               ClearStack(B);
						   SortStack(A,B);
	      	             break;
	     	             case 2:exit(0);
		                 break;
		                 case 3:Home();
		              }

}

//============================= Queue linked liste Implementation  ===============================

typedef struct q_node
                 {
	                char *value;
	                struct q_node *next;
                 }QNODE;

typedef struct
               {
	              QNODE *front;
	              QNODE *rear;
	              int size;
               }QUEUE;

void CreateQueue(QUEUE *pq)
                          {
                          	pq->front=NULL;
                          	pq->rear=NULL;
                          	pq->size=0;
                          }
void EnQueue(QUEUE *pq,char *item)
                                   {
                                   	QNODE *pn =(QNODE*)malloc(sizeof(QNODE));
                                   	pn->next=NULL;
                                   	pn->value=item;

                                   	if(!pq->rear)
                                   	               {
									                 pq->front=pn;
									               }
									else
									     {
									      pq->rear->next=pn;
									     }
                                   	pq->rear=pn;
                                   	pq->size++;
	                               }

char* DeQueue(QUEUE *pq)
                       {                        // this  return an string
	                    char *item;
	                    char*x;
	                    QNODE *pn=pq->front;
	                    *item=pn->value;
	                    x=pn->value;
	                    pq->front=pn->next;
	                    free(pn);
	                    pq->size--;
	                    return x;
	                   }
int QueueEmpty(QUEUE* pq)
                         {
	                       return !pq->front;
                        }

int QueueFull(QUEUE* pq)
                       {
	                     return 0;
                       }

int QueueSize(QUEUE* pq)
                       {
	                    return pq->size;
                       }

void ClearQueue(QUEUE* pq){
	                        while(pq->front)
							               {
		                                      pq->rear=pq->front->next;
		                                      free(pq->front);
		                                      pq->front=pq->rear;
	                                      }
	                        pq->size  = 0;
                          }
void CharacterDisplay(char *item)
                       {
                         while(*item !='\0')
						                      {
                         	                     printf("%c",*item);
                         	                     item++;
						                      }
						 printf("\n");

                       }
void DisplayQueue(QUEUE* pq,void(*pf)(char*))      //here this function have two parameters frist-pointer from the kind of Struct Queue and second-function have one parameter
                                            {
											 QNODE *pn;
	                                        for (pn=pq->front; pn; pn=pn->next)
		                                                      (*pf)(pn->value);
                                            }

int WaitFunction()
              {
	           srand(time(0));
               int count = 1,x;
               for(;;)
			         {
                      x=rand()%2001+1000;   // x=rand()%(higher-lower+1)+lower   ===> rand()%(3000-1000+1)+1000;
		              printf("\n\n-Waiting time before passing : %d ms\n",x) ;
		              Sleep(x);
			          return x;
			          }
			   }


void HotPotatoGame()
                   {

                   	 system("cls");
				     printf("\n===[ Hot Potato Game ]============================================================================>\n\n");
	                 srand(time(0));
	                 int count = 0, t=0 , i=0, N_plr, r_num,x,start;
	                 QUEUE q,e;
	                 CreateQueue(&q);
	                 CreateQueue(&e); // this queue will recive the lose players list
	                 char names[10][15] = { "Ali", "Ahmed","Mohmed","Nour","Burak","Furkan","Alp","Zeynep","Asmaa","Ayse" };

	                 while(1) {
					            printf("\n-How Many Players [3-10]: ");
	                            scanf("%d",&N_plr);
					            if(N_plr>10||N_plr<3)
								                    {
					                        	      system("cls");
				                                      printf("\n===[ Hot Potato Game ]============================================================================>\n\n");
					                        	      printf("\n-Number [%d] Is Invalid Please Try Again\n\n ",N_plr);
											       }
		                        else break;
	                          }
	                for(i=0;i<N_plr;i++)
			                             {
		                                     EnQueue(&q,names[i]);
		                                 }
		            system("cls");
		            printf("\n===[ Hot Potato Game ]============================================================================>\n\n");
	                printf("\n-Players Names Are :\n");
	                printf("-------------------\n\n");
	                DisplayQueue(&q,&CharacterDisplay);
	                r_num=rand()%15001+10000;      // x=rand()%(higher-lower+1)+lower   ===> rand()%(25000-10000+1)+10000;
	                printf("\n\nStart Game ? \n\n1-Yes\t\t2-Change Players Number\n\n-Your choice :");
	                scanf("%d",&start);
	                if(start==1)
					          {
					  	        while(1)
					                   {
					       	             system("cls");
	                                     printf("\n===[Hot Potato Game]============================================================================>\n\n");
					       	             printf("\-Music Will Work About [%d] ms\n",r_num);
					       	             if(QueueSize(&q)==1)
								                             {
								                  	            system("cls");
				                                                printf("\n===[ Hot Potato Game ]============================================================================>\n\n");
							  	                                printf("\n\n-The Winer Player Is : ");
							  	                                DisplayQueue(&q,&CharacterDisplay);
							  	                                break;
								                  }

							            printf("\n\n-Last Losing Player Is :");
							            DisplayQueue(&e,&CharacterDisplay);
		                                printf("\n\n\n-Hot Potato with :----->>> ");
		                                DisplayQueue(&q,&CharacterDisplay);
		                                t+=WaitFunction();
		                                EnQueue(&q,DeQueue(&q));

			                            if(t>=r_num)
							                        {

					       	                         printf("\-Music Will Work About [%d] ms\n",r_num);
							            	         EnQueue(&e,DeQueue(&q));
							            	         if(QueueSize(&e)>1)
											                           {
							            	                  	            DeQueue(&e);
										                               }
		                                             t=0;
										             r_num=rand()%15001+10000;
										            }

		                               }
				          }

				   else if(start==2) HotPotatoGame();
				   printf("\n\nDo you want To Play Again ? \n\n1-Yes\t\t2-Exit\t\t3-Home\n\n-Your choice: ");
                   scanf("%d",&x);
                   switch(x)
	                          {
	      	                    case 1:HotPotatoGame();
	      	                    break;
	     	                    case 2:exit(0);
		                        break;
		                        case 3:Home();
		                      }
                   }

void Home()
          {  system("cls");
             int x;
	         stack A,B;
	         InitializeStack(&A);
	         InitializeStack(&B);
	         printf("\n===[ Data Structures And Algorithms Project ]=====================================================================>\n\n");
	         printf(" 1-Sort Stack\t\t2-Hot Potato Game\t\t3-Exit\n");
	         while(x<1||x>3)
			                {
	                        	printf("\n\n\n\n\n-Your choice : ");
	                            scanf("%d",&x);
	                        }
	         printf("\n");
	         switch(x)
	                  {
	      	             case 1:SortStack(&A,&B);
	      	             break;
	     	             case 2:HotPotatoGame();
		                 break;
		                 case 3:exit(0);
		              }
			}

int main ()
             {

	             Home();
	             getchar();

	        }






#include <stdio.h>
#include <sys/time.h>

int *a;
int * createArray(int n)
{
  int i;
  int* a=(int*)calloc(n, sizeof(int)); //generate the random numbers
  srand(time(NULL));
  for (i=0; i<n; i++)
  {
    a[i]= rand() % 100 + 1;
  }
  return a;
}

int main() //main function
{
    int n,i;
    char x;
    printf("What sort do you want to use?: B for Bubble, Q for Quicksort and M for Merge.\n");
    scanf("%c",&x);

    printf("How Many Elements?:");
    scanf("%d",&n);
    int* array = createArray(n); //array of elements

    printf("Starting Numbers:\n");
    for(i = 0; i < n; i++)
      printf("%d ", array[i]); //printing the numbers generated
    if (x=='b')
    {
      struct timeval t;
      gettimeofday(&t,NULL);
      double initialTime=t.tv_sec+(t.tv_usec/1000000.0); //time of day before the test
      bubbleSort(array,n);
      gettimeofday(&t,NULL);
      double finishTime=t.tv_sec+(t.tv_usec/1000000.0); //time of day after the test
      double executionTime = finishTime-initialTime; // Time after minus time before to get the time taken for the test
      printf("\nTotal Time:%.6f\n",executionTime);
    }
    else if (x=='m')
    {
      struct timeval t;
      gettimeofday(&t,NULL);
      double initialTime=t.tv_sec+(t.tv_usec/1000000.0); //time of day before the test
      mergesort(array,0,n-1);
      gettimeofday(&t,NULL);
      double finishTime=t.tv_sec+(t.tv_usec/1000000.0); //time of day after the test
      double executionTime = finishTime-initialTime; // Time after minus time before to get the time taken for the test
      printf("\nTotal Time:%.6f\n",executionTime);
    }
    else if(x=='q')
    {
      struct timeval t;
      gettimeofday(&t,NULL);
      double initialTime=t.tv_sec+(t.tv_usec/1000000.0); //time of day before the test
      quicksort(array,0,n-1);
      gettimeofday(&t,NULL);
      double finishTime=t.tv_sec+(t.tv_usec/1000000.0); //time of day after the test
      double executionTime = finishTime-initialTime; // Time after minus time before to get the time taken for the test
      printf("\nTotal Time:%.6f\n",executionTime);
    }

    printf("Sorted Numbers:\n");
    //output
    for(i = 0; i < n; i++)

      printf("%d ", array[i]); //print the numbers sorted into order



    return 0;
}


//Main function for choosing the numbers yourself

/*
int main()
{
    int a[30],n,i;
    char x;
    printf("What sort do you want to use?: B for Bubble, Q for Quicksort and M for Merge.\n");
    scanf("%c",&x);

    printf("How Many Elements?:\n");
    scanf("%d",&n);

    printf("Enter Numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if (x=='b')
    {
      struct timeval t;
      gettimeofday(&t,NULL);
      double initialTime=t.tv_sec+(t.tv_usec/1000000.0);
      bubbleSort(a,n);
      gettimeofday(&t,NULL);
      double finishTime=t.tv_sec+(t.tv_usec/1000000.0);
      double executionTime = finishTime-initialTime;
      printf("Total Time:%.6f\n",executionTime);
    }
    else if (x=='m')
    {
      struct timeval t;
      gettimeofday(&t,NULL);
      double initialTime=t.tv_sec+(t.tv_usec/1000000.0);
      mergesort(a,0,n-1);
      gettimeofday(&t,NULL);
      double finishTime=t.tv_sec+(t.tv_usec/1000000.0);
      double executionTime = finishTime-initialTime;
      printf("Total Time:%.6f\n",executionTime);
    }
    else if(x=='q')
    {
      struct timeval t;
      gettimeofday(&t,NULL);
      double initialTime=t.tv_sec+(t.tv_usec/1000000.0);
      quicksort(a,0,n-1);
      gettimeofday(&t,NULL);
      double finishTime=t.tv_sec+(t.tv_usec/1000000.0);
      double executionTime = finishTime-initialTime;
      printf("Total Time:%.6f\n",executionTime);
    }

    printf("Sorted Numbers\n");
    //output
    for(i = 0; i < n; i++)

      printf("%d\n", a[i]);


    return 0;
}
*/

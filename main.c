#include <stdio.h>


int main()
{
    int a[30],n,i;
    char x;
    printf("What sort do you want to use\n");
    scanf("%c",&x);

    printf("How Many Elements?:");
    scanf("%d",&n);

    printf("Enter Numbers:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    if (x=='b')
    {
      bubbleSort(a,n);
    }
    else if (x=='m')
    {
      mergesort(a,0,n-1);
    }
    else if(x=='q')
    {
      quicksort(a,0,n-1);
    }

    printf("Sorted Numbers\n");
    //output
    for(i = 0; i < n; i++)

      printf("%d\n", a[i]);


    return 0;
}

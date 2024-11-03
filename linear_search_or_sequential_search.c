#include<stdio.h>
void main()
{
    int a[10];
    int key;
    int n;
    int i;
    printf("enter the elements for your array :\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element you want to search in array :\n");
    scanf("%d",&key);
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf ("\nelement found : on %d index ",i);
        }
    }

}
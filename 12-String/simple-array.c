int main()
{
    int i,n;
    printf("Enter the range of array: ");
    scanf("%d",&n);
    char str1[n];
    for(i=0;i<=n;i++)
    {
        scanf("%s",&str1[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%s",str1[i]);
    }
}
//linear search
int linearsearch(int arr[],int size, int target)
{
    for (int i0, i<size; i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
    return -1;

}

int main()
{
    int arr[];
    int size, target;
    printf("Number of elements to be entered;\t");
    scanf("%d",&size);
    printf("Enter elements of array\t");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEnter target element to be found: \t");
    scanf("%d",&target);
    int result = linear search(arr,size,target);

    if (result==-1)
    {
        printf("\nTarget element not found in array\n");

    }
    else
    {
        printf("\n Target element found at index %d\n", result);
    }
    }

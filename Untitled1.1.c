#include <stdio.h>

#define MAX 100

int main()
{
    int arr[MAX], n, i;
    int key;
    int low, high, mid;
    int found = 0;

    // Create List
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Display List
    printf("List Elements: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Linear Search
    printf("\nEnter element to search (Linear Search): ");
    scanf("%d", &key);

    found = 0;
    for(i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at position %d\n", i );
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found\n");

    // Binary Search
    printf("\nEnter element to search (Binary Search): ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
    found = 0;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element found at position %d\n", mid );
            found = 1;
            break;
        }
        else if(key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found == 0)
        printf("Element not found\n");

    return 0;
}

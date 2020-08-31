#include<stdio.h>
struct Array
{
    int array_A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    printf("\nElements Are :\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\t", arr.array_A[i]);
    }
}

void append(struct Array *arr,int element)
{
    if (arr->length<arr->size)
    {
        arr->array_A[arr->length++] = element;
    }
}


void insert (struct Array *arr , int index, int element)
{
    if (index<arr->length && index>=0)
    {
        for (int i = arr->length; i >= index; i--)
        {
            arr->array_A[i] = arr->array_A[i - 1];
        }
        
    }
    arr->array_A[index] = element;
    arr->length++;
}

int delete(struct Array *arr,int index)
{
    int x = index;
    if (index<arr->length && index>=0)
    {
        for (int i =index; i < arr->length-1; i++)
        {
            arr->array_A[i] = arr->array_A[i + 1];
        }
        arr->length--;
        return x;
    }
    return 0;
}


int main()
{
    struct Array arr1 = {{2,3,4,5,6},10,5};
    printf("\n\nOriginal array is :");
    Display(arr1);

    printf("\n\nAfter inserting : ");
    insert(&arr1, 2, 111);
    Display(arr1);

    printf("\n\nAfter appending : ");
    append(&arr1, 786);
    Display(arr1);

    printf("\n\nDeleted index : %d", delete (&arr1, 5));
    Display(arr1);
    return 0;
}

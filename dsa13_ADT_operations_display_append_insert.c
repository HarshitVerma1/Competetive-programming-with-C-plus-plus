#include<stdio.h>
struct Array
{
    int array_A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    printf("Elements Are :\n");
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

int main()
{
    struct Array arr1 = {{2,3,4,5,6},10,5};
    insert(&arr1, 2, 111);
    append(&arr1, 786);
    Display(arr1);
    return 0;
}

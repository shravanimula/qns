// program to move all zeroes at the end of array
 #include <stdio.h> 
void array(int arr[], int n)
{
     int count = {0};  
     for (int i = 0; i < n; i++)
        if (arr[i] != 0)
        arr[count++] = arr[i];              
       while (count < n)
       arr[count++] = 0;
}
int main()
{
	int arr[] = {2,5,7,0,4,0,7,-5,8,0};
       int n = sizeof(arr) / sizeof(arr[0]);
	array(arr, n);
       printf("%s\n", "Array after zeros to end of array:");
         for (int i = 0; i < n; i++)
     printf("%d ", arr[i]);
}

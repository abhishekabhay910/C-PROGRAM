#include <stdio.h>
int LENGTH; 
int heapSize;
void Heapify(int* A, int i)
{
  	int l = 2 * i + 1;
  	int r = 2 * i + 2;
  	int largest;
  	if(l <= heapSize && A[l] > A[i])
    	largest = l;
  	else
    	largest = i;
  	if(r <= heapSize && A[r] > A[largest])
    	largest = r;
  	if(largest != i)
    	{
      	int temp = A[i];
      	A[i] = A[largest];
      	A[largest] = temp;
      	Heapify(A, largest);
    	}
}
void BuildHeap(int* A)
{
  	heapSize = LENGTH - 1;
  	int i;
  	for(i = (LENGTH - 1) / 2; i >= 0; i--)
    	Heapify(A, i);
}
void HeapSort(int* A)
{
  	BuildHeap(A);
  	int i;
  	for(i = LENGTH - 1; i > 0; i--)
    	{
      	int temp = A[heapSize];
      	A[heapSize] = A[0];
      	A[0] = temp;
      	heapSize--;
      	Heapify(A, 0);
    	}
}
int main()
{
  	int tab[10];int k;
	printf("enetr the size of array\n");
	scanf("%d",&LENGTH);
	printf("enter the elements\n");
	for(k=0;k<LENGTH;k++)
	scanf("%d",&tab[k]);
  	HeapSort(tab);
  	int i;
	printf("sorted array using heap sort algorithm\n");
  	for(i = 0; i < LENGTH; i++)
    	printf("%d ",tab[i]);
  	return 0;
}

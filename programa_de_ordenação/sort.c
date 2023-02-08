#include <stdio.h>
void mostra_vetor(int v[])
{
  int count1, j;

  printf("\n{  %2d", v[0]);

  for (count1 = 1; count1 < 478; count1++)
  {
    printf(", %2d", v[count1]);
  }

  printf("}\n");
}
/*Merge Sort----------------------------------------------------*/
/* Intercala as seqüências v[p]..v[q-1] e v[q]..v[r] */
void intercala(int p, int q, int r, int v[])
{
  int count1, j, k;
  int w[478];

  count1 = p;
  j = q;
  k = 0;

  while (count1 < q && j <= r)
  {
    if (v[count1] <= v[j])
    {
      w[k++] = v[count1++];
    }
    else
    {
      w[k++] = v[j++];
    }
  }

  while (count1 < q)
    w[k++] = v[count1++];

  while (j <= r)
  {
    w[k++] = v[j++];
  }

  for (count1 = p; count1 <= r; count1++)
  {
    v[count1] = w[count1 - p];
  }
}

void mergesort(int p, int r, int v[])
{
  if (p < r)
  {
    int q = (p + r) / 2;
    mergesort(p, q, v);
    mergesort(q + 1, r, v);
    intercala(p, q + 1, r, v);
    mostra_vetor(v);
  }
}
/*-----------------------------------------------------------------*/
void troca(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

/*Bubble Sort-------------------------------------------------------*/
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
  int i, j;
  for (i = 0; i < n - 1; i++)

    // Last i elements are already in place
    for (j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        troca(&arr[j], &arr[j + 1]);
      }
    }
}
/*-----------------------------------------------------------------*/
/*Insertion sort---------------------------------------------------*/
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
  int i, key, j;
  for (i = 1; i < n; i++)
  {
    key = arr[i];
    j = i - 1;

    /* Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position */
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}
/*-----------------------------------------------------------------*/
/*Quick sort-------------------------------------------------------*/
// function to find the partition position
int partition(int array[], int low, int high)
{

  // select the rightmost element as pivot
  int pivot = array[high];

  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++)
  {
    if (array[j] <= pivot)
    {
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      // swap element
      troca(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  troca(&array[i + 1], &array[high]);

  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high)
{
  if (low < high)
  {

    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);

    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);

    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}
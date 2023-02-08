#include "sort.h"

int main(void)
{
  while (1)
  {
    printf("Escolha qual vetor deseja utilizar:\n[1] -> Vetor 1\n[2] -> Vetor 2\n[3] -> Vetor 3\n[4] -> Vetor 4\n [0] -> Sair\n");
    scanf("%d", &escolhe_vetor);
    switch (escolhe_vetor)
    {
    case 0:
      printf("Obrigado pelo Teste\n");
      return 0;
      break;
    /*Caso deo Vetor 1 ==============================================================================================*/
    case 1:
      printf("Escolha o metodo de ordenação:\n[1] -> Bubble Sort\n [2] -> Insertion Sort\n [3] -> Merge Sort\n [4] -> Quick Sort\n");
      scanf("%d", verifica_vetor);
      switch (verifica_vetor)
      {
      case 1:
        printf("Ordenando Vetor 1 utilizando Bubble Sort:\n==========================================\n");
        mostra_vetor(vetor);
        bubbleSort(vetor, 478);
        mostra_vetor(vetor);
        break;
      case 2:
        printf("Ordenando Vetor 1 utilizando Insertion Sort:\n==========================================\n");
        mostra_vetor(vetor);
        insertionSort(vetor, 478);
        mostra_vetor(vetor);
        break;
      case 3:
        printf("Ordenando Vetor 1 utilizando Merge Sort:\n==========================================\n");
        mostra_vetor(vetor);
        mergesort(0, 478, vetor);
        mostra_vetor(vetor);
        break;
      case 4:
        printf("Ordenando Vetor 1 utilizando Quick Sort:\n==========================================\n");
        mostra_vetor(vetor);
        quickSort(vetor, 0, 478);
        mostra_vetor(vetor);
        break;
      }
      break;
    /*Caso deo Vetor 2 ==============================================================================================*/
    case 2:
      printf("Escolha o metodo de ordenação:\n[1] -> Bubble Sort\n [2] -> Insertion Sort\n [3] -> Merge Sort\n [4] -> Quick Sort\n");
      scanf("%d", verifica_vetor);
      switch (verifica_vetor)
      {
      case 1:
        printf("Ordenando Vetor 2 utilizando Bubble Sort:\n==========================================\n");
        mostra_vetor(vetor_2);
        bubbleSort(vetor_2, 478);
        mostra_vetor(vetor_2);
        break;
      case 2:
        printf("Ordenando Vetor 2 utilizando Insertion Sort:\n==========================================\n");
        mostra_vetor(vetor_2);
        insertionSort(vetor_2, 478);
        mostra_vetor(vetor_2);
        break;
      case 3:
        printf("Ordenando Vetor 2 utilizando Merge Sort:\n==========================================\n");
        mostra_vetor(vetor_2);
        mergesort(0, 478, vetor_2);
        mostra_vetor(vetor_2);
        break;
      case 4:
        printf("Ordenando Vetor 2 utilizando Quick Sort:\n==========================================\n");
        mostra_vetor(vetor_2);
        quickSort(vetor_2, 0, 478);
        mostra_vetor(vetor_2);
        break;
      }
      break;
    /*Caso deo Vetor 3 ==============================================================================================*/
    case 3:
      printf("Escolha o metodo de ordenação:\n[1] -> Bubble Sort\n [2] -> Insertion Sort\n [3] -> Merge Sort\n [4] -> Quick Sort\n");
      scanf("%d", verifica_vetor);
      switch (verifica_vetor)
      {
      case 1:
        printf("Ordenando Vetor 3 utilizando Bubble Sort:\n==========================================\n");
        mostra_vetor(vetor_3);
        bubbleSort(vetor_3, 478);
        mostra_vetor(vetor_3);
        break;
      case 2:
        printf("Ordenando Vetor 3 utilizando Insertion Sort:\n==========================================\n");
        mostra_vetor(vetor_3);
        insertionSort(vetor_3, 478);
        mostra_vetor(vetor_3);
        break;
      case 3:
        printf("Ordenando Vetor 3 utilizando Merge Sort:\n==========================================\n");
        mostra_vetor(vetor_3);
        mergesort(0, 478, vetor_3);
        mostra_vetor(vetor_3);
        break;
      case 4:
        printf("Ordenando Vetor 3 utilizando Quick Sort:\n==========================================\n");
        mostra_vetor(vetor_3);
        quickSort(vetor_3, 0, 478);
        mostra_vetor(vetor_3);
        break;
      }
      break;
    /*Caso deo Vetor 4 ==============================================================================================*/
    case 4:
      printf("Escolha o metodo de ordenação:\n[1] -> Bubble Sort\n [2] -> Insertion Sort\n [3] -> Merge Sort\n [4] -> Quick Sort\n");
      scanf("%d", verifica_vetor);
      switch (verifica_vetor)
      {
      case 1:
        printf("Ordenando Vetor 4 utilizando Bubble Sort:\n==========================================\n");
        mostra_vetor(vetor_4);
        bubbleSort(vetor_4, 478);
        mostra_vetor(vetor_4);
        break;
      case 2:
        printf("Ordenando Vetor 4 utilizando Insertion Sort:\n==========================================\n");
        mostra_vetor(vetor_4);
        insertionSort(vetor_4, 478);
        mostra_vetor(vetor_4);
        break;
      case 3:
        printf("Ordenando Vetor 4 utilizando Merge Sort:\n==========================================\n");
        mostra_vetor(vetor_4);
        mergesort(0, 478, vetor_4);
        mostra_vetor(vetor_4);
        break;
      case 4:
        printf("Ordenando Vetor 4 utilizando Quick Sort:\n==========================================\n");
        mostra_vetor(vetor_4);
        quickSort(vetor_4, 0, 478);
        mostra_vetor(vetor_4);
        break;
      }
      break;
    }
  }

  return 0;
}
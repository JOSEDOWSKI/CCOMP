#include <iostream>
using namespace std;
void imprimir(int A[], int n){
  for (int i = 0; i < n; i++)
    cout << A[i] << " ";
  cout << endl;
}
int corredor=0;
int main() {
  int A[10]={90, 45, 30, 20, 10, 40, 60, 50, 5, 2};
  int n = sizeof(A) / sizeof(A[0]);
  cout << "Antes de ordenar : " << endl;
  imprimir(A, n);
  
  for (int* p = A; p < (A + n); p++){  
    int temp=A[corredor];
    int contador=0;
    for (int* p = A; p < (A + n); p++){
      
      if (temp>(*p)){
        contador=contador+1;
        }
      }
    int* q=(A+contador);
    *p=*q;
    *q=temp;
    corredor++;
    }
  cout << "Después de ordenar : " << endl;
  imprimir(A, n);
}
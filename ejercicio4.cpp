#include "iostream"
using namespace std;

void  arreglos(int arr[], int n){

    for(int i =0; i<n ; i++){
        cout<< " Ingresa el numero:/n";
        cin>>arr[i];
    }
}
void sumadearreglos(int arr1[],int arr2[],int n, int resultado ){
    for(int i =0; i<n ; i++){
        resultado[i] = arr1[i]+arr2[i];
    }
}
void desplegarresultado(int resultado1[], int n){
    cout<< "El resultado es:/n";
    for(int i=0; i<n; i++){
        cout<<resultado[i];
    }
}
int main(){
    int n=5;
    int arr1[n];
    int arr2[n];
    int resultado[n];
    arreglos(arr1,n);
    arreglos(arr2,n);
    sumadearreglos(arr1,arr2,n,resultado);
    desplegarresultado(resultado,n);

}
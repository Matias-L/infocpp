//Programa 11.15. P666 (modificado)
#include <iostream>
using namespace std;

int ordenBurbuja( int);
const int NUMEL=10;
int nums[NUMEL]={22,5,67,98,45,32,101,99,73,10};

int main(){

    int i, movimientos;
    movimientos=ordenBurbuja( NUMEL);
    
    cout<<"La lista ordenada, en orden ascendente, es:"<<endl;
    for (i=0; i<NUMEL; i++){
        cout<<" "<< nums[i];
        }
        
        cout<<endl<<"Se hicieron "<<movimientos<< " movimientos para ordenar esta lista"<<endl;
        
    system("pause");
    return 0;
    }
    
    
    //********************BURBUJA***********
    
    int ordenBurbuja( int numel){
        int i, j, temp, movimientos=0;
        
        for(i=0;i<(numel-1);i++){
                                 for(j=1;j<numel;j++){
                                                      
                                                      if(nums[j] <nums[j-1]){
                                                      temp=nums[j];
                                                      nums[j]=nums[j-1];
                                                      nums[j-1]=temp;
                                                      movimientos++; 
                                                      }
                                                      }
                                 }
        return movimientos;
        }

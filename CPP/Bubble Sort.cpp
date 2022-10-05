#include<iostream>

using namespace std;

int main(){
    int i,j,size,list[100],temp;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    cout<<"Enter elements:"<<endl;
    for(i=0; i<size; i++){
        cin>>list[i];
    }

    // Bubble Sort Logic

    for(i = 0; i < size; i++)
 {
    for(j = 0; j < size-i-1; j++)
 {
 if( list[j] > list[j+1])
 {
 // swap the elements
 temp = list[j];
 list[j] = list[j+1];
 list[j+1] = temp;
 } 
 }
 }

 cout<<"Sorted List: ";
 for ( i = 0; i < size; i++)
 {
    cout<<list[i]<<" ";
 }
 
}
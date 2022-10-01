#include <iostream>
using namespace std;
int main(){
 int size,i,j,temp,list[100];
cout<<"Insert the size of the List:"<<endl;
cin>>size;
cout<<"Enter elements:"<<endl;
 for(i=0; i<size; i++)
cin>>list[i];
 //Selection sort logic
 for(i=0; i<size; i++){
 for(j=i+1; j<size; j++){
 if(list[i] > list[j])
 {
 temp=list[i];
 list[i]=list[j];
 list[j]=temp;
 }
 }
 }
 printf("List after sorting is: ");
 for(i=0; i<size; i++)
cout<<list[i]<<" ";
}

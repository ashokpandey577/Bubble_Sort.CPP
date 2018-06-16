#include <iostream>   
using namespace std;
#define M 100
int main()
{
    int A[M],N,Temp;
    cout<<"Enter Size of Arry";
    cin>>N; cout<<N<<endl; 
    
    for(int i=0; i<N; i++)
    {
        cout<<"Enter value in A["<<i<<"] : ";
        cin>>A[i]; cout<<A[i]<<endl;
    }
     
    printf("After Sorting\n");
    
    //Algo for Bubble Sort
    for(int j=0; j<N-1; j++)
    {
        for(int k=0; k<N-j-1; k++)
        {
            if(A[k]>A[k+1]) 
            {
                Temp=A[k];
                A[k]=A[k+1];
                A[k+1]=Temp;
            }
        }
    } 
    
    for(int j=0; j<N; j++)
    {
        cout<<"The value of A["<<j<<"] : "<<A[j]<<endl;
    }
     
}

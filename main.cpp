#include <iostream>
using namespace std;

int main()
{
    int arr[]= {10,7,9,2,4,9,7,6};
    int i=0, SHORT_RES=0,j=0, n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Arreglo a ordenar: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
    cout<<endl;
    for(i=1; i<n; i++)
    {
        SHORT_RES = arr[i];
        j=i-1;
        while(j >= 0 && arr[j] > SHORT_RES)
        {
            arr[j+1] = arr[j];
            j = j-1;

        }


        arr[j+1] = SHORT_RES;
        cout<<"j:"<<j<<" i: "<<i<<endl;
    }
    cout<<"Arreglo a ordenado: ";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<",";
    }
    return 0;
}

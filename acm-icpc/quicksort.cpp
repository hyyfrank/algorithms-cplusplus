//
// Created by mac on 2018/4/1.
//

#include "quicksort.h"
void quickSort(vector<int>& A, int p,int q){
    int r;
    if(p<q)
    {
        r=partition(A, p, q);
        quickSort(A,p,r);
        quickSort(A,r+1,q);
    }
}


int partition(vector<int>& A, int p,int q)
{
    int x= A[p];
    int i=p;
    int j;

    for(j=p+1; j<q; j++)
    {
        if(A[j]<=x)
        {
            i=i+1;
            swap(A[i],A[j]);
        }

    }

    swap(A[i],A[p]);
    return i;
}
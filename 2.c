//
// Created by allenlyu on 8/1/16.
//


#include <memory.h>
#include <printf.h>
#include <stdio.h>
int  main()
{

//    int a = 44;
//    short b = 2;
    char *a = strdup("allenlyu");
    char *b = strdup("ringlee");
    swap(&a,&b, sizeof(char *));
    printf("%s + %s\n",a,b);

    return 0;
}

void swap(void *vp1, void *vp2, int size)
{
    char buffer[size];

    memcpy(buffer,vp1,size);
    memcpy(vp1,vp2,size);
    memcpy(vp2,buffer,size);
}

//int lsearch(int key, int array[],int size)
//{
//    for (int i = 0; i < size; i++) {
//        if (array[i] ==key)//*(array + i)
//        {
//            return i;
//        }
//    }
//    return -1;
//}

//void *lsearch(void *key, void *base,int n,int elemSize)
//{
//    for(int i =0 ; i<n;i++)
//    {
//        void *elemAttr = (char *)base + i*elemSize;
//        if(memcpy(key,elemAttr,elemSize)==0)
//        {
//            return elemAttr;
//        }
//    }
//
//
//    return NULL;
//}





void *lsearch(void *key, void *base ,int n, int elemSize,int (*cmpfn)(void *a, void*b))
{

}
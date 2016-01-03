// treeTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <time.h>
#include <iostream>
#include <stdio.h>
#include <Windows.h>
using namespace std;
int swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return 1;
}
/**
*\brief  选择排序
*\param[in]
*\return
*/
void selectSort(int a[],int length)
{
    int minval = 0;
    for (int i = 0;i < length;i++)
    {
        minval = a[i];
        for (int j = i + 1; j < length;j++)
        {
            if (minval > a[j])
            {
                minval = a[j];
                swap(&a[i],&a[j]);
            }
        }
    }
}
/**
*\brief  冒泡排序
*\param[in]
*\return
*/
void bubbleSort(int a[],int length)
{
    for (int i = 0;i < length;i++)
    {
        for (int j = i+1;j < length;j++)
        {
            if (a[j] > a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
/**
*\brief  插入排序
*\param[in]
*\return
*/
void insertSort(int a[],int length)
{
    for (int i = 1;i < length;i++)
    {
        int key = a[i];
        for (int j = i - 1;j >= 0;j--)
        {
            if (a[j] > key)
            {
                a[j+1] = a[j];
                a[j] = key;
            }
        }

    }
}
/**
*\brief  快速排序
*\param[in]
*\return
*/
void quickSort(int a[],int left,int right)
{
    int low = left;
    int high = right;
    int key = a[right];
    if (left >= right)
    {
        return ;
    }
    while(low < high)
    {
        while(a[high] >= key && high > low)
        {
            high--;
        }
        while(a[low] <= key && low < high)
        {
            low++;
        }
        if(low < high)
        {
            swap(&a[low],&a[high]);
        }
    }
    if (a[low] > key)
    {// 此时两个标计量已经重叠
        swap(&a[low],&a[right]);
    }
    quickSort(a,left,low - 1);
    quickSort(a,high + 1,right);
}
int _tmain(int argc, _TCHAR* argv[])
{

    int tempArr[100000];

    for (int i = 0; i <100000;i++)
    {
        tempArr[i] = rand();
    }
    DWORD timestart = GetTickCount();
    bubbleSort(tempArr,100000);
    for (int i = 0;i < 100000;i++)
    {
        cout<<tempArr[i]<<endl;
    }
    cout<<"运行时间为:"<<GetTickCount() - timestart<<endl;
    return 0;
}


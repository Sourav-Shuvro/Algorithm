#include <iostream>
using namespace std;
int a[50];
void merge(int,int,int);
void merge_sort(int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge_sort(low,mid);
        merge_sort(mid+1,high);
        merge(low,mid,high);
    }
}
void merge(int low,int mid,int high)
{
    int h,i,j,b[50],k;
    h=low;
    i=low;
    j=mid+1;
    while((h<=mid)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>mid)
    {
        for(k=j;k<=high;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h;k<=mid;k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low;k<=high;k++)
    {
        a[k]=b[k];
    }
}
int main()
{
    int num,i;
    cout<<"********************************************************************************"<<endl;
    cout<<"                             MERGE SORT PROGRAM                                 "<<endl;
    cout<<"********************************************************************************"<<endl;
    cout<<endl<<endl;
    cout<<"Please Enter THE NUMBER OF ELEMENTS you want to sort [THEN PRESS ENTER]:"<<endl;
    cin>>num;
    cout<<endl;
    cout<<"Now, Please Enter the ( "<< num <<" ) numbers (ELEMENTS) [THEN PRESS ENTER]:"<<endl;
    for(i=1;i<=num;i++)
    {
        cin>>a[i] ;
    }
    merge_sort(1,num);
    cout<<endl;
    cout<<"So, the sorted list (using MERGE SORT) will be :"<<endl;
    cout<<endl<<endl;
    for(i=1;i<=num;i++)
    {
        cout<<a[i]<<"	";
    }
    cout<<endl<<endl<<endl<<endl;
}

/*
#include <iostream>

using namespace std;

void merge(int*,int*,int,int,int);
void mergesort(int *a, int*b, int low, int high)
{
    int pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        mergesort(a,b,low,pivot);
        mergesort(a,b,pivot+1,high);
        merge(a,b,low,pivot,high);
    }
}
void merge(int *a, int *b, int low, int pivot, int high)
{
    int h,i,j,k;
    h=low;
    i=low;
    j=pivot+1;

    while((h<=pivot)&&(j<=high))
    {
        if(a[h]<=a[j])
        {
            b[i]=a[h];
            h++;
        }
        else
        {
            b[i]=a[j];
            j++;
        }
        i++;
    }
    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=a[k];
            i++;
        }
    }
    for(k=low; k<=high; k++) a[k]=b[k];
}

int main()
{
    int a[] = {12,10,43,23,-78,45,123,56,98,41,90,24};
    int num;

    num = sizeof(a)/sizeof(int);

    int b[num];

    mergesort(a,b,0,num-1);

    for(int i=0; i<num; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
*/








/*#include <iostream>

using namespace std;

// A function to merge the two half into a sorted data.
void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	// Merge the two parts into temp[].
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}

	// Insert all the remaining values from i to mid into temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}

	// Insert all the remaining values from j to high into temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}


	// Assign sorted data stored in temp[] to a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}

// A function to split array into two parts.
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Split the data into two half.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);

		// Merge them to get sorted output.
		Merge(a, low, high, mid);
	}
}

int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;

	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}

	MergeSort(arr, 0, n-1);

	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        cout<<"->"<<arr[i];

	return 0;
}
*/

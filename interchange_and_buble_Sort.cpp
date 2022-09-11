void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void interchangeSort(int a[], int n)
{
	for(int i=0; i<n; ++i)
	{
		for(int j=i+1; j<=n; ++j)
		{
			if(a[j] < a[i])
			{
				swap(a[i], a[j]);
			}
		}
		print_array(a);
		printf("\n");
	}
}

void bubleSort(int a[],int n)
{
	int i, j;
	for(i=0; i<N-1; i++)
	{
		for(j=N-1; j>i; j--)
		{
			if(a[j]<a[j-1])
			{
				swap(a[j], a[j-1]);
			}
		}
	}
}

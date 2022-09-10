void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void selectionSort(int a[], int n)
{
	int min = 0;
	for(int i=0; i<n-1;++i)
	{
		min=0;
		for(int j=i;j<=n; ++j)
		{
			if(a[j] < a[i])
			{
				min=j;
				swap(a, i, min);
			}
		}
	}
}

void insertionSort(int a[], int n)
{
	int pos, i;
	int x;
	for(int i=1; i<n; ++i)
	{
		x = a[i];
		pos = i-1;
		while(pos >= 0 && (a[pos] > x))
		{
			a[pos+1] = a[pos];
			pos--;
		}
		a[pos+1] = x;
		print_array(a);
		printf("\n");
	}
}
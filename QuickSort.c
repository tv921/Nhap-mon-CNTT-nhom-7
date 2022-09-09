void QuickSort (int a[], int l, int r)
{
	int i, j;
	int x;
	x = a[(l+r)/2];
	i =l; j = r;	
	do 
	{
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		if(i <= j)
		{
			hoanvi(a[i], a[j]);
			i++; j--;			
		}
	}
	while(i < j);
		if(l < j)
	QuickSort(a,l,j);
		if(i < r)
	QuickSort(a,i,r);		
}
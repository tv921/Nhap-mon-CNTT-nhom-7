void HeapSort (int a[], int N)
{
    int r;
    r = N;
    while (r > 0)
    {
        Hoanvi(a[1], a[r]);
        r = r -1;
        Shift(a,1,r);
    }
}
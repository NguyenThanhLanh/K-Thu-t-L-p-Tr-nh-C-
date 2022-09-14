int UocChungLonNhat(int a, int b){
    if (a==b)
    {
        return a;
    }
    if (a>b)
    {
        return UocChungLonNhat(a-b, b);
    }
    else
    {
        return UocChungLonNhat(a, b-a);
    }
}

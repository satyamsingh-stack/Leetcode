pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long,long long> resultant(INT_MAX,INT_MIN);
    for(int i=0;i<n;i++){
        if(resultant.first>a[i])
            resultant.first=a[i];
        if(resultant.second<a[i])
            resultant.second=a[i];
    }
    return resultant;   
}

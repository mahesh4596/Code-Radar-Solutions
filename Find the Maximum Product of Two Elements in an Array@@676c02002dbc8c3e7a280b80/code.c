int main() {
    int n;
    scanf("%d", &n);

    int ary[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &ary[i]);
    }
    printf("%d",ary[n-1]*ary[n-2]);
    return 0;
}
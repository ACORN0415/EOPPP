int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6676[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 44;
    int v2 = 51;
    int v3 = 41;
    int v4 = 10;
    int v5 = 95;
    int v6 = 98;
    int v7 = 98;
    int i;
    for (i = 0; i < 10; i++) { __arr_6676[i] = v2 + i; }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

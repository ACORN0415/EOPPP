int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4175[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 100;
    int v2 = 41;
    int v3 = 59;
    int v4 = 63;
    int v5 = 8;
    int v6 = 3;
    int i;
    for (i = 0; i < 10; i++) { __arr_4175[i] = v2 + i; }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

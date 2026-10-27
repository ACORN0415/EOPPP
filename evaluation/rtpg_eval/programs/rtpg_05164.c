int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5164[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 87;
    int v2 = 6;
    int v3 = 20;
    int v4 = 78;
    int v5 = 53;
    int i;
    v1 = 93;
    for (i = 0; i < 10; i++) { __arr_5164[i] = v2 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

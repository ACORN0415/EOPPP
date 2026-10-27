int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7695[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 19;
    int v2 = 24;
    int v3 = 57;
    int v4 = 23;
    int i;
    for (i = 0; i < 10; i++) { __arr_7695[i] = v2 + i; }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }

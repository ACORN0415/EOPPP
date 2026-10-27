int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_230[10];
int test_func(void) {
    int v0 = 77;
    int v1 = 0;
    int v2 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_230[i] = v0 + i; }
    v1 = v1 + v0;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v2;
    }
    v1 = __helper(v1);
    v0 = v0 | v2;
    return v0;
}
int main(void) { return test_func(); }

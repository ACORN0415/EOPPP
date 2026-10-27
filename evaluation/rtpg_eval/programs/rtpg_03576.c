int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3576[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 31;
    int v2 = 65;
    int v3 = 93;
    int v4 = 3;
    int i;
    for (i = 0; i < 10; i++) { __arr_3576[i] = v2 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

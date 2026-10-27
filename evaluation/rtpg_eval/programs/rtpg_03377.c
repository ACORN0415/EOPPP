int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3377[10];
int test_func(void) {
    int v0 = 19;
    int v1 = 17;
    int v2 = 79;
    int v3 = 10;
    int v4 = 39;
    int v5 = 9;
    int v6 = 30;
    int v7 = 66;
    int i;
    v5 = v5 + v6;
    v2 = 30;
    for (i = 0; i < 10; i++) { __arr_3377[i] = v6 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

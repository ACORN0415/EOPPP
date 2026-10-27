int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4992[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 60;
    int v2 = 70;
    int v3 = 4;
    int v4 = 92;
    int v5 = 62;
    int v6 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_4992[i] = v4 + i; }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

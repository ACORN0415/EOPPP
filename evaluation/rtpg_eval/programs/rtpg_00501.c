int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_501[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 40;
    int v2 = 32;
    int v3 = 83;
    int v4 = 48;
    int v5 = 74;
    int v6 = 81;
    int v7 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_501[i] = v2 + i; }
    if (v6 > v6) { v6 = v6; }
    v6 = v6 | v3;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

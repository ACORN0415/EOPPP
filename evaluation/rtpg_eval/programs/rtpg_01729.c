int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1729[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 27;
    int v2 = 47;
    int v3 = 32;
    int v4 = 45;
    int v5 = 68;
    int v6 = 17;
    int v7 = 100;
    int i;
    for (i = 0; i < 10; i++) { __arr_1729[i] = v5 + i; }
    if (v1 > v7) { v1 = v7; }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v7 = __helper(v7);
    return v0;
}
int main(void) { return test_func(); }

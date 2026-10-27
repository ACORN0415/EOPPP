int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4582[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 52;
    int v2 = 38;
    int v3 = 16;
    int v4 = 95;
    int v5 = 12;
    int v6 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_4582[i] = v3 + i; }
    v1 = 93;
    v3 = v3 * 5;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }

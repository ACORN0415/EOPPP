int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 21;
    int v1 = 16;
    int v2 = 4;
    int v3 = 26;
    int v4 = 22;
    int v5 = 52;
    int v6 = 28;
    int i;
    if (v1 > v5) { v1 = v5; }
    for (i = 0; i < 12; i++) {
        v3 = v3 + v6;
    }
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

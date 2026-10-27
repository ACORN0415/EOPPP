int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 85;
    int v1 = 9;
    int v2 = 64;
    int v3 = 13;
    int v4 = 83;
    int v5 = 13;
    int v6 = 35;
    int v7 = 82;
    int i;
    for (i = 0; i < 10; i++) {
        v4 = v4 + v2;
    }
    if (v4 > v4) { v4 = v4; }
    v7 = v7 + v2;
    v2 = __helper(v2);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }

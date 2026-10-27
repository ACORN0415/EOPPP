int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 10;
    int v1 = 32;
    int v2 = 22;
    int v3 = 82;
    int v4 = 85;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v1;
    }
    v3 = v3 + v3;
    v3 = v3 - v4;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

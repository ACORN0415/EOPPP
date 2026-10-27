int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 37;
    int v2 = 81;
    int v3 = 15;
    int v4 = 45;
    int v5 = 57;
    int v6 = 10;
    int i;
    v0 = v0 + v6;
    v6 = v6 - v4;
    for (i = 0; i < 10; i++) {
        v6 = v6 + v2;
    }
    if (v6 > 0) goto __skip;
    v6 = 999;
__skip:
    v6 = v6 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

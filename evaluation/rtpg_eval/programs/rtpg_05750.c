int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 10;
    int v1 = 50;
    int v2 = 50;
    int v3 = 47;
    int i;
    v1 = 26;
    for (i = 0; i < 9; i++) {
        v0 = v0 + v3;
    }
    v1 = v1 - v0;
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

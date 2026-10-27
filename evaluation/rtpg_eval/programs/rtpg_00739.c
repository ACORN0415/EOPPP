int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 65;
    int v1 = 51;
    int v2 = 4;
    int v3 = 77;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v1;
    }
    v0 = v0 - v3;
    v3 = __helper(v3);
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    return v0;
}
int main(void) { return test_func(); }

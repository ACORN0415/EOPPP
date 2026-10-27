int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 36;
    int v1 = 47;
    int v2 = 100;
    int v3 = 82;
    int v4 = 17;
    int v5 = 40;
    int v6 = 51;
    int v7 = 80;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v4;
    }
    if (v6 > v3) { v6 = v3; }
    v5 = v5 ^ v7;
    v2 = __helper(v2);
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }

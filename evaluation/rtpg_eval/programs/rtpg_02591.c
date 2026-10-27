int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 4;
    int v1 = 100;
    int v2 = 76;
    int v3 = 16;
    int v4 = 15;
    int v5 = 25;
    int v6 = 19;
    int i;
    v6 = 81;
    v2 = v2 + v1;
    v6 = __helper(v6);
    v4 = v4 ^ v1;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    return v0;
}
int main(void) { return test_func(); }

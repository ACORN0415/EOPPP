int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 73;
    int v2 = 55;
    int v3 = 48;
    int v4 = 4;
    int i;
    v4 = v4 - v0;
    v1 = v1 * 8;
    v4 = __helper(v4);
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    return v0;
}
int main(void) { return test_func(); }

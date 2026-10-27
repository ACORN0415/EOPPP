int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 4;
    int v1 = 97;
    int v2 = 12;
    int v3 = 86;
    int v4 = 58;
    int i;
    v0 = v0 * 10;
    v1 = v1 - v4;
    v3 = v3 + v4;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    v3 = v3 % (v4 + 1);
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }

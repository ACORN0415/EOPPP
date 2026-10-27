int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 92;
    int v1 = 97;
    int v2 = 65;
    int v3 = 99;
    int v4 = 41;
    int v5 = 90;
    int v6 = 1;
    int v7 = 25;
    int i;
    v0 = v0 + v2;
    if (v7 > v1) { v7 = v1; }
    v1 = __helper(v1);
    if (v7 > 0) goto __skip;
    v7 = 999;
__skip:
    v7 = v7 + 1;
    return v0;
}
int main(void) { return test_func(); }

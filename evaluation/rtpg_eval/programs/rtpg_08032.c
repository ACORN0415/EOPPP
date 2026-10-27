int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 89;
    int v1 = 96;
    int v2 = 14;
    int v3 = 24;
    int v4 = 70;
    int v5 = 37;
    int v6 = 62;
    int i;
    v6 = v6 + v3;
    v0 = v0 - v4;
    v0 = __helper(v0);
    v3 = v3 & v5;
    return v0;
}
int main(void) { return test_func(); }

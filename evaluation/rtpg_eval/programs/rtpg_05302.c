int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 23;
    int v1 = 91;
    int v2 = 71;
    int v3 = 56;
    int v4 = 20;
    int v5 = 73;
    int v6 = 64;
    int v7 = 64;
    int i;
    if (v0 > v2) { v0 = v2; }
    v6 = __helper(v6);
    v3 = v3 / (v6 + 1);
    return v0;
}
int main(void) { return test_func(); }

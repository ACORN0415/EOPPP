int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 62;
    int v1 = 47;
    int v2 = 20;
    int v3 = 52;
    int v4 = 57;
    int v5 = 62;
    int v6 = 15;
    int v7 = 3;
    int i;
    if (v7 > v6) { v7 = v6; }
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }

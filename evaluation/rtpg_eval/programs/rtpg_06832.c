int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 46;
    int v1 = 35;
    int v2 = 57;
    int v3 = 8;
    int v4 = 53;
    int v5 = 23;
    int v6 = 19;
    int i;
    v2 = 12;
    if (v6 > v0) { v6 = v0; }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

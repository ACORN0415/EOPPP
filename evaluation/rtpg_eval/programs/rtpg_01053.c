int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 79;
    int v2 = 83;
    int v3 = 75;
    int v4 = 60;
    int v5 = 46;
    int v6 = 94;
    int i;
    if (v1 > v4) { v1 = v4; }
    v6 = __helper(v6);
    v4 = v4 ^ v6;
    return v0;
}
int main(void) { return test_func(); }

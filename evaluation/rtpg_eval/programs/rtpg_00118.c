int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 5;
    int v1 = 97;
    int v2 = 24;
    int v3 = 75;
    int v4 = 68;
    int v5 = 35;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 20; i++) {
        v3 = v3 + v2;
    }
    v4 = v4 - v2;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

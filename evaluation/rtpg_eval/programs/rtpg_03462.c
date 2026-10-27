int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 23;
    int v1 = 53;
    int v2 = 15;
    int v3 = 41;
    int v4 = 17;
    int v5 = 90;
    int v6 = 31;
    int i;
    if (v0 > v0) { v0 = v0; }
    v4 = v4 - v1;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v6;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 40;
    int v1 = 79;
    int v2 = 57;
    int v3 = 99;
    int v4 = 43;
    int v5 = 95;
    int i;
    v3 = v3 - v4;
    if (v5 > v3) { v5 = v3; }
    for (i = 0; i < 11; i++) {
        v2 = v2 + v4;
    }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 3;
    int v1 = 43;
    int v2 = 67;
    int v3 = 61;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v0;
    }
    v1 = v1 ^ v3;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

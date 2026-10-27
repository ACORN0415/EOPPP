int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 65;
    int v1 = 31;
    int v2 = 56;
    int v3 = 82;
    int v4 = 44;
    int v5 = 83;
    int i;
    for (i = 0; i < 17; i++) {
        v1 = v1 + v0;
    }
    v4 = v4 * 10;
    v3 = v3 - v1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

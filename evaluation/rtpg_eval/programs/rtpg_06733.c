int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 50;
    int v2 = 59;
    int v3 = 57;
    int v4 = 91;
    int v5 = 43;
    int v6 = 87;
    int v7 = 22;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v3;
    }
    v1 = v1 - v2;
    v1 = v1 + v3;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

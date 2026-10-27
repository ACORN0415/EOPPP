int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 17;
    int v1 = 74;
    int v2 = 23;
    int v3 = 51;
    int v4 = 75;
    int v5 = 30;
    int i;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v2;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

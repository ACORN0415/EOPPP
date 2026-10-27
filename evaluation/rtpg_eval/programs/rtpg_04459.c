int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 8;
    int v1 = 16;
    int v2 = 94;
    int v3 = 4;
    int i;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v3;
    }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

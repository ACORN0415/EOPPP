int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 80;
    int v1 = 74;
    int v2 = 55;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v0;
    }
    v2 = v2 - v0;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

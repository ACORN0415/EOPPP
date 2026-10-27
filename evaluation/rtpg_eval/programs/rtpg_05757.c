int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 50;
    int v1 = 19;
    int v2 = 86;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v2;
    }
    v0 = v0 - v2;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

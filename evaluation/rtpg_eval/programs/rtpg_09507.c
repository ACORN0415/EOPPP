int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 10;
    int v1 = 2;
    int v2 = 26;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v2;
    }
    v1 = __helper(v1);
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }

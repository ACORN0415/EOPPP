int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 100;
    int v1 = 56;
    int v2 = 92;
    int i;
    v0 = v0 + v2;
    v0 = 60;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v2;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

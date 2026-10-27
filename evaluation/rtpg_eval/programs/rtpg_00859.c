int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 29;
    int v1 = 66;
    int v2 = 94;
    int v3 = 68;
    int v4 = 59;
    int v5 = 67;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v2;
    }
    v5 = __helper(v5);
    v3 = v3 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }

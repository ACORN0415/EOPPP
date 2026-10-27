int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 34;
    int v2 = 89;
    int v3 = 74;
    int v4 = 83;
    int i;
    v2 = v2 - v0;
    v0 = 67;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v0;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

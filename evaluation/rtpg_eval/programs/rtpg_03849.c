int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 45;
    int v2 = 6;
    int v3 = 69;
    int i;
    v3 = 85;
    if (v1 > v1) { v1 = v1; }
    for (i = 0; i < 11; i++) {
        v0 = v0 + v0;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

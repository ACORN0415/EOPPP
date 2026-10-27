int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 85;
    int v1 = 87;
    int v2 = 66;
    int v3 = 40;
    int v4 = 92;
    int i;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v2;
    }
    v0 = v0 - v4;
    if (v2 > v2) { v2 = v2; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

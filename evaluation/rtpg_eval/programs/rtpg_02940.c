int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 15;
    int v1 = 1;
    int v2 = 0;
    int v3 = 98;
    int v4 = 5;
    int v5 = 37;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v5;
    }
    if (v4 > v1) { v4 = v1; }
    v5 = v5 + v4;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

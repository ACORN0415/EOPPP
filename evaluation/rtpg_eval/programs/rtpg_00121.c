int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 82;
    int v1 = 22;
    int v2 = 0;
    int v3 = 78;
    int v4 = 44;
    int v5 = 28;
    int v6 = 60;
    int i;
    v4 = v4 + v5;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v4;
    }
    v5 = __helper(v5);
    v1 = v1 ^ v3;
    return v0;
}
int main(void) { return test_func(); }

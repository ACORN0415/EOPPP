int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 21;
    int v1 = 97;
    int v2 = 56;
    int v3 = 71;
    int v4 = 2;
    int v5 = 94;
    int v6 = 78;
    int v7 = 61;
    int i;
    v6 = v6 + v4;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }

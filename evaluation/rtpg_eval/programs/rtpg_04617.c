int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 40;
    int v1 = 12;
    int v2 = 62;
    int v3 = 47;
    int v4 = 6;
    int v5 = 65;
    int i;
    v0 = 63;
    v3 = v3 + v3;
    v5 = v5 - v3;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

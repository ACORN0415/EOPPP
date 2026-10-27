int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 40;
    int v1 = 17;
    int v2 = 10;
    int v3 = 29;
    int v4 = 5;
    int v5 = 27;
    int i;
    v5 = v5 * 2;
    v5 = v5 % (v0 + 1);
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

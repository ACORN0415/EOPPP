int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 59;
    int v2 = 58;
    int v3 = 87;
    int v4 = 29;
    int v5 = 44;
    int v6 = 10;
    int i;
    v5 = v5 + v2;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

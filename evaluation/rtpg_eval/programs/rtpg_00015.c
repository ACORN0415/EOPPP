int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 85;
    int v1 = 81;
    int v2 = 59;
    int v3 = 69;
    int v4 = 5;
    int v5 = 42;
    int i;
    if (v3 > v0) { v3 = v0; }
    v2 = v2 * 5;
    v5 = v5 - v1;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 91;
    int v1 = 32;
    int v2 = 79;
    int v3 = 81;
    int v4 = 12;
    int i;
    v2 = v2 - v3;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

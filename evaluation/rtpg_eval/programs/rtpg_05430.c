int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 34;
    int v1 = 39;
    int v2 = 73;
    int v3 = 65;
    int v4 = 27;
    int v5 = 41;
    int v6 = 87;
    int i;
    v6 = 52;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }

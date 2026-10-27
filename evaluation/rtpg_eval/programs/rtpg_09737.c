int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 43;
    int v1 = 85;
    int v2 = 55;
    int v3 = 49;
    int v4 = 90;
    int v5 = 85;
    int v6 = 70;
    int i;
    v1 = v1 - v2;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

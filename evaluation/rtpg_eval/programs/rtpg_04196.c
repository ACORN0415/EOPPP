int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 65;
    int v1 = 87;
    int v2 = 97;
    int v3 = 100;
    int v4 = 70;
    int v5 = 99;
    int v6 = 5;
    int i;
    v3 = v3 * 9;
    if (v6 > v2) { v6 = v2; }
    v2 = v2 - v5;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

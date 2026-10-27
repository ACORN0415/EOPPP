int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 84;
    int v1 = 99;
    int v2 = 26;
    int v3 = 39;
    int v4 = 20;
    int v5 = 1;
    int v6 = 9;
    int i;
    v6 = 12;
    v1 = v1 - v4;
    if (v1 > v4) { v1 = v4; }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

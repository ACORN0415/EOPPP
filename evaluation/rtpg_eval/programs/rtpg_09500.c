int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 32;
    int v2 = 76;
    int v3 = 81;
    int v4 = 59;
    int v5 = 12;
    int i;
    if (v2 > v2) { v2 = v2; }
    v3 = v3 - v0;
    v0 = v0 + v1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

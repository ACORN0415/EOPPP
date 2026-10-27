int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 87;
    int v1 = 14;
    int v2 = 47;
    int v3 = 31;
    int i;
    v3 = v3 - v1;
    if (v3 > v2) { v3 = v2; }
    v3 = 80;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

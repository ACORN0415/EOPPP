int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 14;
    int v1 = 67;
    int v2 = 84;
    int v3 = 76;
    int i;
    if (v1 > v1) { v1 = v1; }
    v0 = v0 - v1;
    v1 = v1 + v1;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

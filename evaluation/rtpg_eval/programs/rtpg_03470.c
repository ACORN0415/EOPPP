int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 97;
    int v1 = 79;
    int v2 = 2;
    int v3 = 79;
    int v4 = 2;
    int i;
    v1 = v1 * 6;
    if (v4 > v1) { v4 = v1; }
    v1 = 53;
    v1 = v1 ^ v4;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

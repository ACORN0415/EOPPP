int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 23;
    int v1 = 59;
    int v2 = 79;
    int v3 = 44;
    int v4 = 4;
    int i;
    v0 = v0 * 9;
    v0 = __helper(v0);
    v4 = v4 ^ v3;
    return v0;
}
int main(void) { return test_func(); }

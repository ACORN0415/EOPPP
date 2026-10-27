int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 9;
    int v1 = 81;
    int v2 = 67;
    int i;
    if (v2 > v2) { v2 = v2; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

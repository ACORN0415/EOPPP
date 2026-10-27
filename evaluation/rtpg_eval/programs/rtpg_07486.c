int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 60;
    int v1 = 58;
    int v2 = 61;
    int v3 = 0;
    int v4 = 82;
    int i;
    if (v1 > v1) { v1 = v1; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

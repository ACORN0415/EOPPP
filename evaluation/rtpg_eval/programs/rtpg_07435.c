int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 29;
    int v1 = 35;
    int v2 = 73;
    int i;
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

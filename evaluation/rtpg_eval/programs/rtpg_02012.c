int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 98;
    int v1 = 65;
    int v2 = 46;
    int i;
    v0 = v0 - v1;
    v0 = __helper(v0);
    v2 = v2 & v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

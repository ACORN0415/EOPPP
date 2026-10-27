int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 32;
    int v1 = 98;
    int v2 = 84;
    int i;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 ^ v2;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

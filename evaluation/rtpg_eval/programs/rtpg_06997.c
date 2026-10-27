int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 49;
    int v1 = 51;
    int v2 = 40;
    int v3 = 98;
    int i;
    v0 = 4;
    v2 = v2 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

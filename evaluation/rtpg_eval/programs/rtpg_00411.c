int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 63;
    int v1 = 92;
    int v2 = 84;
    int v3 = 28;
    int v4 = 90;
    int v5 = 51;
    int v6 = 70;
    int i;
    v0 = v0 * 2;
    if (v4 > v0) { v4 = v0; }
    int *__p = &v5;
    *__p = *__p + 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

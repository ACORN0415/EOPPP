int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5864[10];
int test_func(void) {
    int v0 = 28;
    int v1 = 74;
    int v2 = 25;
    int v3 = 75;
    int v4 = 13;
    int i;
    v3 = v3 * 9;
    for (i = 0; i < 10; i++) { __arr_5864[i] = v4 + i; }
    for (i = 0; i < 7; i++) {
        v1 = v1 + v4;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

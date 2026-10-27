int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2802[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 33;
    int v2 = 94;
    int i;
    for (i = 0; i < 10; i++) { __arr_2802[i] = v2 + i; }
    for (i = 0; i < 15; i++) {
        v2 = v2 + v1;
    }
    v2 = 1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

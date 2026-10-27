int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9819[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 72;
    int v2 = 69;
    int v3 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_9819[i] = v3 + i; }
    if (v2 > v0) { v2 = v0; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

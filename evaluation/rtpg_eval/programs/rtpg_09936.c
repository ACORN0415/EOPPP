int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9936[10];
int test_func(void) {
    int v0 = 38;
    int v1 = 80;
    int v2 = 57;
    int v3 = 19;
    int v4 = 40;
    int v5 = 39;
    int v6 = 23;
    int i;
    v0 = v0 - v6;
    for (i = 0; i < 10; i++) { __arr_9936[i] = v5 + i; }
    v3 = __helper(v3);
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

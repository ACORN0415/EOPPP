int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4702[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 25;
    int v2 = 21;
    int v3 = 70;
    int i;
    v3 = 44;
    for (i = 0; i < 10; i++) { __arr_4702[i] = v3 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

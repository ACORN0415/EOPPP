int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8535[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 32;
    int v2 = 70;
    int i;
    for (i = 0; i < 10; i++) { __arr_8535[i] = v2 + i; }
    v1 = v1 + v1;
    v1 = __helper(v1);
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

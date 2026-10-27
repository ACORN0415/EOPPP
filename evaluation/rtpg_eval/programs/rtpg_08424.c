int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8424[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 89;
    int v2 = 31;
    int v3 = 61;
    int v4 = 76;
    int v5 = 39;
    int v6 = 76;
    int i;
    v0 = v0 + v2;
    for (i = 0; i < 10; i++) { __arr_8424[i] = v6 + i; }
    v4 = v4 & v0;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

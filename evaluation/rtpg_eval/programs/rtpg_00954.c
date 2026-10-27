int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_954[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 51;
    int v2 = 21;
    int v3 = 42;
    int v4 = 62;
    int v5 = 61;
    int v6 = 0;
    int v7 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_954[i] = v6 + i; }
    v5 = 74;
    v2 = __helper(v2);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

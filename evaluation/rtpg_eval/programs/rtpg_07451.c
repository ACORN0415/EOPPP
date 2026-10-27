int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7451[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 53;
    int v2 = 22;
    int v3 = 29;
    int v4 = 81;
    int v5 = 57;
    int v6 = 64;
    int i;
    for (i = 0; i < 10; i++) { __arr_7451[i] = v5 + i; }
    v1 = v1 - v4;
    v3 = v3 + v3;
    v0 = __helper(v0);
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

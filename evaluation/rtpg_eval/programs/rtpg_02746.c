int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 92;
    int v1 = 68;
    int v2 = 44;
    int v3 = 45;
    int v4 = 93;
    int v5 = 84;
    int v6 = 19;
    int v7 = 32;
    int i;
    if (v3 > v0) { v3 = v0; }
    for (i = 0; i < 6; i++) {
        v7 = v7 + v4;
    }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v7;
    *__p = *__p + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

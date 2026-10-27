int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 27;
    int v1 = 87;
    int v2 = 75;
    int v3 = 73;
    int v4 = 85;
    int v5 = 66;
    int i;
    if (v5 > v5) { v5 = v5; }
    v4 = v4 * 8;
    for (i = 0; i < 19; i++) {
        v3 = v3 + v3;
    }
    v2 = __helper(v2);
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

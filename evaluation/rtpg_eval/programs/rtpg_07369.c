int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 64;
    int v1 = 83;
    int v2 = 27;
    int v3 = 64;
    int v4 = 75;
    int v5 = 75;
    int i;
    v0 = v0 * 6;
    v1 = v1 - v4;
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    int *__p = &v5;
    *__p = *__p + 1;
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

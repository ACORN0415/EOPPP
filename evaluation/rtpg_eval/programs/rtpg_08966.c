int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 74;
    int v1 = 43;
    int v2 = 62;
    int v3 = 33;
    int v4 = 45;
    int v5 = 31;
    int v6 = 50;
    int i;
    v3 = v3 + v1;
    v3 = v3 * 2;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    v2 = __helper(v2);
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

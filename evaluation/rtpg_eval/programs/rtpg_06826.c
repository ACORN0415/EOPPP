int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 96;
    int v1 = 2;
    int v2 = 79;
    int v3 = 24;
    int v4 = 85;
    int v5 = 82;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v4;
    }
    if (v2 > v1) { v2 = v1; }
    int *__p = &v1;
    *__p = *__p + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

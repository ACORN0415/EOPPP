int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 16;
    int v1 = 3;
    int v2 = 5;
    int v3 = 50;
    int v4 = 40;
    int v5 = 6;
    int i;
    for (i = 0; i < 14; i++) {
        v5 = v5 + v4;
    }
    v5 = __helper(v5);
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

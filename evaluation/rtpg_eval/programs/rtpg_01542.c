int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 6;
    int v1 = 48;
    int v2 = 25;
    int v3 = 10;
    int v4 = 97;
    int v5 = 48;
    int v6 = 41;
    int v7 = 77;
    int i;
    v3 = 18;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v4;
    }
    v7 = v7 + v6;
    int *__p = &v1;
    *__p = *__p + 1;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }

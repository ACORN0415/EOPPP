int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6879[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 11;
    int v2 = 62;
    int v3 = 58;
    int v4 = 88;
    int v5 = 66;
    int v6 = 53;
    int v7 = 14;
    int i;
    v7 = v7 - v3;
    for (i = 0; i < 10; i++) { __arr_6879[i] = v2 + i; }
    for (i = 0; i < 12; i++) {
        v5 = v5 + v0;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

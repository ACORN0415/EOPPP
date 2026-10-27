int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1946[10];
int test_func(void) {
    int v0 = 52;
    int v1 = 1;
    int v2 = 89;
    int v3 = 15;
    int v4 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_1946[i] = v3 + i; }
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

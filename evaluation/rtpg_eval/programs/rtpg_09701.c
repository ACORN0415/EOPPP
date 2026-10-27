int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9701[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 94;
    int v2 = 37;
    int v3 = 83;
    int v4 = 32;
    int v5 = 33;
    int v6 = 20;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v6;
    }
    v2 = v2 * 5;
    for (i = 0; i < 10; i++) { __arr_9701[i] = v2 + i; }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

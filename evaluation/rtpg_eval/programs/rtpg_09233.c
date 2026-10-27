int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9233[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 100;
    int v2 = 63;
    int v3 = 28;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v3;
    }
    v0 = v0 - v3;
    for (i = 0; i < 10; i++) { __arr_9233[i] = v1 + i; }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7575[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 59;
    int v2 = 100;
    int v3 = 56;
    int v4 = 39;
    int v5 = 77;
    int i;
    v1 = 32;
    for (i = 0; i < 10; i++) { __arr_7575[i] = v4 + i; }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1104[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 72;
    int v2 = 87;
    int v3 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_1104[i] = v1 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

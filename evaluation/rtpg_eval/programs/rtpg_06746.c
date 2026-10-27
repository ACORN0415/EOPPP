int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6746[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 76;
    int v2 = 37;
    int v3 = 20;
    int i;
    for (i = 0; i < 10; i++) { __arr_6746[i] = v3 + i; }
    v2 = v2 * 6;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

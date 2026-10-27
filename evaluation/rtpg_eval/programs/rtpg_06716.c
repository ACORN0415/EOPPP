int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6716[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 77;
    int v2 = 76;
    int v3 = 49;
    int i;
    v3 = v3 * 4;
    for (i = 0; i < 10; i++) { __arr_6716[i] = v3 + i; }
    v3 = v3 + v3;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7876[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 50;
    int v2 = 91;
    int v3 = 33;
    int i;
    v1 = v1 * 5;
    for (i = 0; i < 10; i++) { __arr_7876[i] = v0 + i; }
    if (v0 > v1) { v0 = v1; }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3436[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 100;
    int v2 = 57;
    int v3 = 11;
    int i;
    for (i = 0; i < 10; i++) { __arr_3436[i] = v0 + i; }
    v3 = __helper(v3);
    v0 = v0 ^ v3;
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6269[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 14;
    int v2 = 14;
    int v3 = 80;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_6269[i] = v3 + i; }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

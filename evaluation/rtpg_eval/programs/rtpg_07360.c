int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7360[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 79;
    int v2 = 44;
    int v3 = 13;
    int v4 = 1;
    int v5 = 99;
    int i;
    for (i = 0; i < 10; i++) { __arr_7360[i] = v0 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

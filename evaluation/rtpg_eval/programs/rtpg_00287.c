int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_287[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 44;
    int v2 = 19;
    int v3 = 26;
    int v4 = 12;
    int i;
    for (i = 0; i < 10; i++) { __arr_287[i] = v1 + i; }
    v4 = __helper(v4);
    return v0;
}
int main(void) { return test_func(); }

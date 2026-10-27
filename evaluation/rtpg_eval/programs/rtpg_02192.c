int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2192[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 45;
    int v2 = 32;
    int v3 = 100;
    int i;
    v2 = 69;
    for (i = 0; i < 10; i++) { __arr_2192[i] = v2 + i; }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5187[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 75;
    int v2 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_5187[i] = v0 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

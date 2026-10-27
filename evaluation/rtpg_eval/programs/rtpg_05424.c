int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5424[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 92;
    int v2 = 20;
    int v3 = 7;
    int i;
    v2 = v2 + v2;
    for (i = 0; i < 10; i++) { __arr_5424[i] = v2 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

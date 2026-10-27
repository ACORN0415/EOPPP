int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7103[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 67;
    int v2 = 95;
    int v3 = 44;
    int v4 = 76;
    int v5 = 59;
    int v6 = 55;
    int i;
    for (i = 0; i < 10; i++) { __arr_7103[i] = v0 + i; }
    v2 = v2 + v3;
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 70;
    int v2 = 10;
    int i;
    v1 = v1 * 5;
    if (v0 > v2) { v0 = v2; }
    v2 = 29;
    v1 = __helper(v1);
    v2 = __arr_didx[__idx_didx[0]];
    return v0;
}
int main(void) { return test_func(); }

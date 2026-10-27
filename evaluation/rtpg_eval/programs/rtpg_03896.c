int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3896[10];
int __arr_didx[10];
int __idx_didx[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 84;
    int v2 = 69;
    int v3 = 5;
    int v4 = 38;
    int v5 = 72;
    int i;
    v1 = 66;
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) { __arr_3896[i] = v2 + i; }
    v3 = __arr_didx[__idx_didx[0]];
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

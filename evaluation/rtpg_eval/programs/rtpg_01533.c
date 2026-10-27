int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_1533[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 26;
    int v2 = 97;
    int v3 = 25;
    int v4 = 50;
    int v5 = 21;
    int v6 = 90;
    int i;
    v5 = v5 + v1;
    for (i = 0; i < 10; i++) { __arr_1533[i] = v3 + i; }
    v3 = v3 * 9;
    v6 = __helper(v6);
    return v0;
}
int main(void) { return test_func(); }

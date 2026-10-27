int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_999[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 54;
    int v2 = 34;
    int i;
    v2 = v2 - v0;
    for (i = 0; i < 10; i++) { __arr_999[i] = v2 + i; }
    v2 = v2 + v0;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_8053[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 58;
    int v2 = 66;
    int v3 = 3;
    int v4 = 33;
    int v5 = 34;
    int v6 = 81;
    int v7 = 47;
    int i;
    v4 = v4 - v0;
    for (i = 0; i < 10; i++) { __arr_8053[i] = v7 + i; }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

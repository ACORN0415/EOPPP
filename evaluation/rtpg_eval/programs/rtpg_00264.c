int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_264[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 61;
    int v2 = 88;
    int v3 = 78;
    int v4 = 71;
    int v5 = 25;
    int v6 = 97;
    int v7 = 57;
    int i;
    v2 = v2 + v6;
    for (i = 0; i < 10; i++) { __arr_264[i] = v4 + i; }
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_6384[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 36;
    int v2 = 26;
    int v3 = 57;
    int v4 = 74;
    int v5 = 21;
    int i;
    for (i = 0; i < 10; i++) { __arr_6384[i] = v2 + i; }
    for (i = 0; i < 7; i++) {
        v3 = v3 + v4;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

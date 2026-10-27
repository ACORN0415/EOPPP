int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7976[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 68;
    int v2 = 89;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_7976[i] = v1 + i; }
    v2 = __helper(v2);
    v2 = v2 % (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }

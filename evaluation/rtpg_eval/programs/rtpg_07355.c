int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7355[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 53;
    int v2 = 35;
    int v3 = 31;
    int i;
    for (i = 0; i < 10; i++) { __arr_7355[i] = v2 + i; }
    for (i = 0; i < 15; i++) {
        v1 = v1 + v2;
    }
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

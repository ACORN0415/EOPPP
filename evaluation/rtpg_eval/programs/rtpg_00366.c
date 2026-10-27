int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_366[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 70;
    int v2 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_366[i] = v2 + i; }
    v1 = v1 + v0;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v2;
    }
    v0 = __helper(v0);
    return v0;
}
int main(void) { return test_func(); }

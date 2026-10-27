int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5630[10];
int test_func(void) {
    int v0 = 18;
    int v1 = 64;
    int v2 = 97;
    int v3 = 36;
    int i;
    v3 = 27;
    for (i = 0; i < 11; i++) {
        v0 = v0 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_5630[i] = v3 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

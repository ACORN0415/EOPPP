int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7294[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 32;
    int v2 = 97;
    int i;
    for (i = 0; i < 10; i++) { __arr_7294[i] = v1 + i; }
    v2 = v2 * 8;
    if (v0 > 0) goto __skip;
    v0 = 999;
__skip:
    v0 = v0 + 1;
    v1 = __helper(v1);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

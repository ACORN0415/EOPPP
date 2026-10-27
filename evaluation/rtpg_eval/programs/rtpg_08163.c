int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int test_func(void) {
    int v0 = 0;
    int v1 = 59;
    int v2 = 49;
    int v3 = 94;
    int i;
    for (i = 0; i < 12; i++) {
        v2 = v2 + v2;
    }
    v0 = 36;
    v0 = __helper(v0);
    if (v2 > 0) goto __skip;
    v2 = 999;
__skip:
    v2 = v2 + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

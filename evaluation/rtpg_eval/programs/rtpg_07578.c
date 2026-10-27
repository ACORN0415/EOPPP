int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_7578[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 98;
    int v2 = 52;
    int v3 = 34;
    int v4 = 2;
    int i;
    for (i = 0; i < 10; i++) { __arr_7578[i] = v0 + i; }
    v4 = __helper(v4);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    return v0;
}
int main(void) { return test_func(); }

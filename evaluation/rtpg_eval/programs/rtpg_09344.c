int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9344[10];
int test_func(void) {
    int v0 = 75;
    int v1 = 82;
    int v2 = 27;
    int i;
    for (i = 0; i < 10; i++) { __arr_9344[i] = v0 + i; }
    v2 = v2 / (v0 + 1);
    if (v1 > 0) goto __skip;
    v1 = 999;
__skip:
    v1 = v1 + 1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

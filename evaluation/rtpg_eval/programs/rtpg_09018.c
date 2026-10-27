int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9018[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 79;
    int v2 = 76;
    int v3 = 5;
    int v4 = 53;
    int v5 = 56;
    int v6 = 81;
    int v7 = 94;
    int i;
    v1 = 47;
    v5 = v5 - v1;
    for (i = 0; i < 10; i++) { __arr_9018[i] = v1 + i; }
    v5 = __helper(v5);
    float __f = 1.5f;
    __f = __f + 1.0f;
    if (v4 > 0) goto __skip;
    v4 = 999;
__skip:
    v4 = v4 + 1;
    return v0;
}
int main(void) { return test_func(); }

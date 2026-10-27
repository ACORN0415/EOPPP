int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9603[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 75;
    int v2 = 70;
    int v3 = 50;
    int v4 = 23;
    int v5 = 23;
    int v6 = 47;
    int i;
    if (v5 > v5) { v5 = v5; }
    for (i = 0; i < 10; i++) { __arr_9603[i] = v6 + i; }
    v3 = 69;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }

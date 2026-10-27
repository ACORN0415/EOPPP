int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9106[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 20;
    int v2 = 17;
    int v3 = 31;
    int v4 = 31;
    int v5 = 89;
    int v6 = 30;
    int v7 = 3;
    int i;
    v2 = v2 - v4;
    for (i = 0; i < 10; i++) { __arr_9106[i] = v0 + i; }
    v7 = __helper(v7);
    return v0;
}
int main(void) { return test_func(); }

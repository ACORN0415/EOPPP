int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_4562[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 81;
    int v2 = 83;
    int v3 = 90;
    int v4 = 95;
    int v5 = 39;
    int v6 = 57;
    int i;
    for (i = 0; i < 10; i++) { __arr_4562[i] = v1 + i; }
    v0 = v0 - v5;
    v5 = 43;
    v4 = __helper(v4);
    v4 = v4 ^ v1;
    return v0;
}
int main(void) { return test_func(); }

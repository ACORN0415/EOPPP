int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9523[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 69;
    int v2 = 64;
    int v3 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_9523[i] = v2 + i; }
    v1 = v1 + v0;
    v2 = v2 ^ v1;
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

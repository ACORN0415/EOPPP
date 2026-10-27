int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_9912[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 22;
    int v2 = 34;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_9912[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v2;
    }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_133[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 14;
    int v2 = 65;
    int v3 = 33;
    int v4 = 52;
    int v5 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_133[i] = v5 + i; }
    for (i = 0; i < 8; i++) {
        v1 = v1 + v1;
    }
    v2 = v2 - v4;
    v5 = __helper(v5);
    return v0;
}
int main(void) { return test_func(); }

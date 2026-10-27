int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_2157[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 13;
    int v2 = 1;
    int v3 = 55;
    int v4 = 73;
    int i;
    for (i = 0; i < 19; i++) {
        v4 = v4 + v1;
    }
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) { __arr_2157[i] = v1 + i; }
    v1 = __helper(v1);
    return v0;
}
int main(void) { return test_func(); }

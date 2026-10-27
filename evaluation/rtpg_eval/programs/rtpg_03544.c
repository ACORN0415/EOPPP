int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_3544[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 52;
    int v2 = 72;
    int v3 = 49;
    int v4 = 44;
    int v5 = 67;
    int v6 = 61;
    int v7 = 8;
    int i;
    v7 = v7 - v4;
    for (i = 0; i < 10; i++) { __arr_3544[i] = v4 + i; }
    if (v1 > v0) { v1 = v0; }
    v3 = __helper(v3);
    return v0;
}
int main(void) { return test_func(); }

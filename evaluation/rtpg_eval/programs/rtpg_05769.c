int __helper(int n) {
    if (n <= 1) return n;
    return __helper(n - 1) + __helper(n - 2);
}
int __arr_5769[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 70;
    int v2 = 97;
    int v3 = 15;
    int v4 = 51;
    int v5 = 24;
    int v6 = 66;
    int v7 = 17;
    int i;
    if (v6 > v5) { v6 = v5; }
    v5 = v5 - v0;
    for (i = 0; i < 10; i++) { __arr_5769[i] = v5 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    v2 = __helper(v2);
    return v0;
}
int main(void) { return test_func(); }

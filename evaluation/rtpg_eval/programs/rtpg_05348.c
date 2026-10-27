int __arr_5348[10];
int test_func(void) {
    int v0 = 63;
    int v1 = 67;
    int v2 = 9;
    int v3 = 45;
    int v4 = 30;
    int v5 = 41;
    int v6 = 41;
    int i;
    v6 = v6 * 2;
    for (i = 0; i < 10; i++) { __arr_5348[i] = v3 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

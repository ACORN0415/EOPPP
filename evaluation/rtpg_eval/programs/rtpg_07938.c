int __arr_7938[10];
int test_func(void) {
    int v0 = 53;
    int v1 = 40;
    int v2 = 49;
    int v3 = 31;
    int v4 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_7938[i] = v3 + i; }
    if (v3 > v4) { v3 = v4; }
    int *__p = &v3;
    *__p = *__p + 1;
    v2 = v2 | v3;
    return v0;
}
int main(void) { return test_func(); }

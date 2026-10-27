int __arr_8072[10];
int test_func(void) {
    int v0 = 93;
    int v1 = 14;
    int v2 = 41;
    int v3 = 60;
    int v4 = 38;
    int v5 = 29;
    int i;
    for (i = 0; i < 10; i++) { __arr_8072[i] = v2 + i; }
    v1 = v1 * 4;
    int *__p = &v5;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

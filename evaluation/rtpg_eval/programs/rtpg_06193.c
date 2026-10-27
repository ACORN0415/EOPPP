int __arr_6193[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 20;
    int v2 = 19;
    int v3 = 79;
    int v4 = 4;
    int v5 = 98;
    int v6 = 28;
    int v7 = 84;
    int i;
    for (i = 0; i < 9; i++) {
        v4 = v4 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_6193[i] = v4 + i; }
    if (v3 > v6) { v3 = v6; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

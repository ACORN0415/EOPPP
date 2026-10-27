int __arr_3655[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 26;
    int v2 = 37;
    int v3 = 43;
    int v4 = 71;
    int v5 = 16;
    int v6 = 80;
    int i;
    for (i = 0; i < 10; i++) {
        v1 = v1 + v5;
    }
    v3 = v3 + v1;
    for (i = 0; i < 10; i++) { __arr_3655[i] = v5 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

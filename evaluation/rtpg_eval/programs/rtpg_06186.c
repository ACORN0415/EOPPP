int __arr_6186[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 51;
    int v2 = 63;
    int v3 = 43;
    int v4 = 78;
    int v5 = 44;
    int i;
    for (i = 0; i < 15; i++) {
        v5 = v5 + v4;
    }
    v5 = v5 * 9;
    for (i = 0; i < 10; i++) { __arr_6186[i] = v0 + i; }
    int *__p = &v4;
    *__p = *__p + 1;
    v0 = v0 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }

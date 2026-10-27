int __arr_6277[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 60;
    int v2 = 18;
    int v3 = 36;
    int v4 = 68;
    int v5 = 38;
    int i;
    for (i = 0; i < 10; i++) { __arr_6277[i] = v3 + i; }
    for (i = 0; i < 11; i++) {
        v0 = v0 + v5;
    }
    v5 = v5 - v3;
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

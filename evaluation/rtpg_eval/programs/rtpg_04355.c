int __arr_4355[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 41;
    int v2 = 61;
    int v3 = 59;
    int v4 = 58;
    int v5 = 76;
    int i;
    v2 = 52;
    for (i = 0; i < 10; i++) { __arr_4355[i] = v0 + i; }
    for (i = 0; i < 6; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 / (v3 + 1);
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

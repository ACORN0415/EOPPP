int __arr_7738[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 41;
    int v2 = 90;
    int v3 = 85;
    int v4 = 18;
    int v5 = 32;
    int v6 = 56;
    int v7 = 61;
    int i;
    for (i = 0; i < 10; i++) { __arr_7738[i] = v3 + i; }
    v7 = v7 * 7;
    for (i = 0; i < 19; i++) {
        v0 = v0 + v4;
    }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

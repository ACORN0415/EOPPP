int __arr_3972[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 52;
    int v2 = 68;
    int v3 = 16;
    int v4 = 48;
    int v5 = 52;
    int i;
    for (i = 0; i < 12; i++) {
        v3 = v3 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_3972[i] = v2 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_6142[10];
int test_func(void) {
    int v0 = 47;
    int v1 = 30;
    int v2 = 96;
    int v3 = 21;
    int v4 = 53;
    int i;
    v3 = v3 * 6;
    for (i = 0; i < 10; i++) { __arr_6142[i] = v1 + i; }
    v3 = 90;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

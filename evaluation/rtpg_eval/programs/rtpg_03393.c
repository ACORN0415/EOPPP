int __arr_3393[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 58;
    int v2 = 44;
    int v3 = 6;
    int v4 = 55;
    int v5 = 86;
    int i;
    for (i = 0; i < 10; i++) { __arr_3393[i] = v4 + i; }
    v4 = v4 + v0;
    v1 = v1 - v2;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

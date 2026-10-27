int __arr_7070[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 97;
    int v2 = 30;
    int v3 = 99;
    int i;
    v3 = 4;
    for (i = 0; i < 10; i++) { __arr_7070[i] = v2 + i; }
    v0 = v0 - v3;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

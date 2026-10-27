int __arr_8539[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 99;
    int v2 = 6;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 10; i++) { __arr_8539[i] = v2 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    v1 = v1 / (v0 + 1);
    return v0;
}
int main(void) { return test_func(); }

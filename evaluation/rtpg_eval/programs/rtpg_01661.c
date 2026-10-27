int __arr_1661[10];
int test_func(void) {
    int v0 = 49;
    int v1 = 99;
    int v2 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_1661[i] = v2 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

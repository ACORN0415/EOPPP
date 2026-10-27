int __arr_6077[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 49;
    int v2 = 18;
    int i;
    for (i = 0; i < 10; i++) { __arr_6077[i] = v1 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

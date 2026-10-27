int __arr_164[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 71;
    int v2 = 37;
    int v3 = 69;
    int i;
    for (i = 0; i < 10; i++) { __arr_164[i] = v1 + i; }
    v2 = 32;
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

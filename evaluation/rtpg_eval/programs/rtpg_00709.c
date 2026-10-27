int __arr_709[10];
int test_func(void) {
    int v0 = 35;
    int v1 = 92;
    int v2 = 8;
    int i;
    for (i = 0; i < 10; i++) { __arr_709[i] = v1 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

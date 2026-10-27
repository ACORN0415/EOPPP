int __arr_5910[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 48;
    int v2 = 61;
    int i;
    for (i = 0; i < 10; i++) { __arr_5910[i] = v2 + i; }
    if (v2 > v0) { v2 = v0; }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

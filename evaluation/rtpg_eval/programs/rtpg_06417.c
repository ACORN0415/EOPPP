int __arr_6417[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 3;
    int v2 = 30;
    int i;
    if (v1 > v0) { v1 = v0; }
    for (i = 0; i < 10; i++) { __arr_6417[i] = v0 + i; }
    v2 = v2 | v0;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

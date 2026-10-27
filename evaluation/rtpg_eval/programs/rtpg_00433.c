int __arr_433[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 52;
    int v2 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_433[i] = v0 + i; }
    v1 = v1 * 5;
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

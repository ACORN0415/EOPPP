int __arr_3909[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 49;
    int v2 = 79;
    int v3 = 42;
    int v4 = 93;
    int i;
    for (i = 0; i < 10; i++) { __arr_3909[i] = v0 + i; }
    v2 = v2 / (v3 + 1);
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_5962[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 49;
    int v2 = 10;
    int v3 = 11;
    int i;
    for (i = 0; i < 10; i++) { __arr_5962[i] = v1 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_3784[10];
int test_func(void) {
    int v0 = 22;
    int v1 = 21;
    int v2 = 18;
    int v3 = 75;
    int i;
    for (i = 0; i < 10; i++) { __arr_3784[i] = v0 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

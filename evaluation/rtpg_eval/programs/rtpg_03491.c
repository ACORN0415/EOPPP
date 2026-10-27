int __arr_3491[10];
int test_func(void) {
    int v0 = 80;
    int v1 = 4;
    int v2 = 22;
    int i;
    for (i = 0; i < 10; i++) { __arr_3491[i] = v0 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

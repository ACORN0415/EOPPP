int __arr_5476[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 51;
    int v2 = 37;
    int i;
    for (i = 0; i < 10; i++) { __arr_5476[i] = v0 + i; }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_1140[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 30;
    int v2 = 49;
    int v3 = 83;
    int i;
    for (i = 0; i < 10; i++) { __arr_1140[i] = v3 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

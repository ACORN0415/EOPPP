int __arr_5577[10];
int test_func(void) {
    int v0 = 43;
    int v1 = 81;
    int v2 = 81;
    int v3 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_5577[i] = v3 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

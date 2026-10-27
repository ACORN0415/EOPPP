int __arr_4899[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 62;
    int v2 = 13;
    int i;
    if (v2 > v1) { v2 = v1; }
    for (i = 0; i < 10; i++) { __arr_4899[i] = v0 + i; }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

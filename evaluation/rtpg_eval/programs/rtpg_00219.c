int __arr_219[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 41;
    int v2 = 11;
    int v3 = 45;
    int v4 = 49;
    int v5 = 5;
    int i;
    for (i = 0; i < 10; i++) { __arr_219[i] = v2 + i; }
    if (v4 > v2) { v4 = v2; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

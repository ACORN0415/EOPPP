int __arr_3790[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 8;
    int v2 = 20;
    int v3 = 79;
    int v4 = 76;
    int v5 = 70;
    int v6 = 36;
    int i;
    for (i = 0; i < 10; i++) { __arr_3790[i] = v2 + i; }
    int *__p = &v3;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

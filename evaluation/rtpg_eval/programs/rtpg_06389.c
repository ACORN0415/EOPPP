int __arr_6389[10];
int test_func(void) {
    int v0 = 90;
    int v1 = 56;
    int v2 = 40;
    int v3 = 57;
    int v4 = 68;
    int i;
    v3 = v3 + v3;
    for (i = 0; i < 10; i++) { __arr_6389[i] = v0 + i; }
    v4 = 89;
    int *__p = &v4;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

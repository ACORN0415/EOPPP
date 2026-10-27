int __arr_228[10];
int test_func(void) {
    int v0 = 65;
    int v1 = 96;
    int v2 = 8;
    int v3 = 48;
    int i;
    for (i = 0; i < 10; i++) { __arr_228[i] = v2 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_6655[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 11;
    int v2 = 11;
    int v3 = 42;
    int v4 = 70;
    int i;
    v4 = v4 + v1;
    for (i = 0; i < 10; i++) { __arr_6655[i] = v1 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

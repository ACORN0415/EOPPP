int __arr_602[10];
int test_func(void) {
    int v0 = 57;
    int v1 = 34;
    int v2 = 96;
    int v3 = 45;
    int v4 = 24;
    int v5 = 53;
    int i;
    if (v4 > v0) { v4 = v0; }
    for (i = 0; i < 10; i++) { __arr_602[i] = v3 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    int *__p = &v2;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

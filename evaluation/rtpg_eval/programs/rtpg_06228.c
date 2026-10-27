int __arr_6228[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 34;
    int v2 = 18;
    int v3 = 34;
    int v4 = 54;
    int v5 = 100;
    int v6 = 92;
    int i;
    v0 = 24;
    for (i = 0; i < 10; i++) { __arr_6228[i] = v3 + i; }
    if (v1 > v5) { v1 = v5; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_3115[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 13;
    int v2 = 1;
    int v3 = 99;
    int v4 = 84;
    int v5 = 0;
    int v6 = 65;
    int v7 = 32;
    int i;
    for (i = 0; i < 10; i++) { __arr_3115[i] = v1 + i; }
    v1 = v1 + v4;
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

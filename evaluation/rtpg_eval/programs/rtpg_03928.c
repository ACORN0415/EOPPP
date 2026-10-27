int __arr_3928[10];
int test_func(void) {
    int v0 = 55;
    int v1 = 98;
    int v2 = 42;
    int v3 = 6;
    int i;
    for (i = 0; i < 10; i++) { __arr_3928[i] = v0 + i; }
    int *__p = &v0;
    *__p = *__p + 1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    v3 = v3 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }

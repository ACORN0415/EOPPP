int __arr_9021[10];
int test_func(void) {
    int v0 = 87;
    int v1 = 59;
    int v2 = 78;
    int v3 = 20;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_9021[i] = v2 + i; }
    v3 = v3 + v2;
    v3 = v3 ^ v2;
    int *__p = &v3;
    *__p = *__p + 1;
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

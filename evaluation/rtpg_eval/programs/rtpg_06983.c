int __arr_6983[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 100;
    int v2 = 5;
    int v3 = 65;
    int v4 = 53;
    int v5 = 51;
    int v6 = 63;
    int i;
    for (i = 0; i < 10; i++) { __arr_6983[i] = v1 + i; }
    v1 = 93;
    v6 = v6 + v3;
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    int *__p = &v1;
    *__p = *__p + 1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_1257[10];
int test_func(void) {
    int v0 = 40;
    int v1 = 9;
    int v2 = 71;
    int v3 = 68;
    int v4 = 52;
    int v5 = 100;
    int v6 = 60;
    int v7 = 52;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_1257[i] = v1 + i; }
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

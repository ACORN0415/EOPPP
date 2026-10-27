int __arr_7922[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 100;
    int v2 = 13;
    int v3 = 69;
    int v4 = 18;
    int v5 = 17;
    int v6 = 77;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v5;
    }
    for (i = 0; i < 10; i++) { __arr_7922[i] = v1 + i; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

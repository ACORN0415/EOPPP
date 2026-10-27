int __arr_914[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 7;
    int v2 = 12;
    int v3 = 36;
    int v4 = 22;
    int v5 = 90;
    int v6 = 27;
    int v7 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_914[i] = v5 + i; }
    for (i = 0; i < 9; i++) {
        v6 = v6 + v0;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

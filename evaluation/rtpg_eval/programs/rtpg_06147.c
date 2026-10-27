int __arr_6147[10];
int test_func(void) {
    int v0 = 71;
    int v1 = 100;
    int v2 = 37;
    int v3 = 6;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_6147[i] = v2 + i; }
    v3 = 12;
    v3 = v3 % (v0 + 1);
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

int __arr_2668[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 57;
    int v2 = 84;
    int v3 = 71;
    int v4 = 86;
    int v5 = 38;
    int v6 = 52;
    int i;
    v3 = v3 - v1;
    for (i = 0; i < 10; i++) { __arr_2668[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v1 = v1 + v0;
    }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

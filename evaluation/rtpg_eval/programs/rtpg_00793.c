int __arr_793[10];
int test_func(void) {
    int v0 = 12;
    int v1 = 87;
    int v2 = 13;
    int v3 = 86;
    int i;
    v2 = v2 * 6;
    for (i = 0; i < 10; i++) { __arr_793[i] = v1 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

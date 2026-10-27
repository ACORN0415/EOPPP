int __arr_3305[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 21;
    int v2 = 56;
    int v3 = 87;
    int i;
    for (i = 0; i < 10; i++) { __arr_3305[i] = v3 + i; }
    v2 = v2 - v1;
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

int __arr_891[10];
int test_func(void) {
    int v0 = 46;
    int v1 = 2;
    int v2 = 79;
    int v3 = 77;
    int v4 = 77;
    int i;
    for (i = 0; i < 10; i++) { __arr_891[i] = v2 + i; }
    v2 = v2 * 2;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

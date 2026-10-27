int __arr_3291[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 15;
    int v2 = 63;
    int v3 = 21;
    int v4 = 8;
    int i;
    for (i = 0; i < 18; i++) {
        v1 = v1 + v1;
    }
    v0 = v0 + v1;
    for (i = 0; i < 10; i++) { __arr_3291[i] = v2 + i; }
    switch (v0) {
        case 0: v0 = 1; break;
        case 1: v0 = 2; break;
        default: v0 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

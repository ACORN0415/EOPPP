int __arr_8598[10];
int test_func(void) {
    int v0 = 21;
    int v1 = 25;
    int v2 = 99;
    int v3 = 34;
    int i;
    for (i = 0; i < 10; i++) { __arr_8598[i] = v3 + i; }
    v2 = v2 + v0;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

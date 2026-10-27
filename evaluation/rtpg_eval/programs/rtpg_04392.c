int __arr_4392[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 1;
    int v2 = 2;
    int v3 = 44;
    int v4 = 23;
    int i;
    v2 = 50;
    v3 = v3 + v3;
    for (i = 0; i < 10; i++) { __arr_4392[i] = v2 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

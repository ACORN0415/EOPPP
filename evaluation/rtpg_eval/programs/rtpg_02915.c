int __arr_2915[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 39;
    int v2 = 25;
    int v3 = 28;
    int v4 = 18;
    int v5 = 57;
    int i;
    for (i = 0; i < 10; i++) { __arr_2915[i] = v5 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

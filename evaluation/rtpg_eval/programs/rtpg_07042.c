int __arr_7042[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 3;
    int v2 = 98;
    int v3 = 35;
    int v4 = 68;
    int v5 = 60;
    int i;
    for (i = 0; i < 10; i++) { __arr_7042[i] = v0 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

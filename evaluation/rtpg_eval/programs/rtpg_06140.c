int __arr_6140[10];
int test_func(void) {
    int v0 = 48;
    int v1 = 36;
    int v2 = 99;
    int v3 = 52;
    int v4 = 50;
    int v5 = 72;
    int v6 = 57;
    int i;
    if (v5 > v2) { v5 = v2; }
    for (i = 0; i < 10; i++) { __arr_6140[i] = v2 + i; }
    v4 = v4 + v1;
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

int __arr_926[10];
int test_func(void) {
    int v0 = 82;
    int v1 = 0;
    int v2 = 14;
    int v3 = 28;
    int v4 = 93;
    int v5 = 9;
    int v6 = 16;
    int i;
    for (i = 0; i < 10; i++) { __arr_926[i] = v0 + i; }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v5 = v5 & v3;
    return v0;
}
int main(void) { return test_func(); }

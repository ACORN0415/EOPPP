int __arr_628[10];
int test_func(void) {
    int v0 = 91;
    int v1 = 72;
    int v2 = 52;
    int v3 = 51;
    int v4 = 8;
    int v5 = 60;
    int v6 = 71;
    int v7 = 87;
    int i;
    v4 = 71;
    for (i = 0; i < 10; i++) { __arr_628[i] = v2 + i; }
    switch (v6) {
        case 0: v6 = 1; break;
        case 1: v6 = 2; break;
        default: v6 = 0; break;
    }
    v6 = v6 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }

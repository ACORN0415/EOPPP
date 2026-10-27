int __arr_4945[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 24;
    int v2 = 17;
    int v3 = 89;
    int v4 = 2;
    int v5 = 65;
    int i;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_4945[i] = v3 + i; }
    v1 = v1 % (v4 + 1);
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

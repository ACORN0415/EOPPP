int __arr_5438[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 85;
    int v2 = 80;
    int v3 = 96;
    int v4 = 33;
    int v5 = 80;
    int v6 = 59;
    int v7 = 97;
    int i;
    v4 = 54;
    for (i = 0; i < 10; i++) { __arr_5438[i] = v5 + i; }
    switch (v5) {
        case 0: v5 = 1; break;
        case 1: v5 = 2; break;
        default: v5 = 0; break;
    }
    if (v3 > 0) goto __skip;
    v3 = 999;
__skip:
    v3 = v3 + 1;
    v5 = v5 / (v6 + 1);
    return v0;
}
int main(void) { return test_func(); }

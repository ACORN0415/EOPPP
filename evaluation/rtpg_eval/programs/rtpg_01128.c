int __arr_1128[10];
int test_func(void) {
    int v0 = 1;
    int v1 = 96;
    int v2 = 58;
    int v3 = 7;
    int i;
    for (i = 0; i < 10; i++) { __arr_1128[i] = v0 + i; }
    v3 = v3 - v1;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

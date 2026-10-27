int __arr_524[10];
int test_func(void) {
    int v0 = 5;
    int v1 = 35;
    int v2 = 18;
    int v3 = 90;
    int i;
    v1 = 8;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_524[i] = v3 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

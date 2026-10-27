int __arr_4934[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 7;
    int v2 = 74;
    int v3 = 64;
    int i;
    for (i = 0; i < 10; i++) { __arr_4934[i] = v1 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

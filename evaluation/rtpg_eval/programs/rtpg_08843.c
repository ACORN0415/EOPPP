int __arr_8843[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 13;
    int v2 = 74;
    int v3 = 89;
    int v4 = 92;
    int i;
    v0 = 32;
    v2 = v2 + v1;
    for (i = 0; i < 10; i++) { __arr_8843[i] = v0 + i; }
    switch (v4) {
        case 0: v4 = 1; break;
        case 1: v4 = 2; break;
        default: v4 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

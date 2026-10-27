int __arr_7954[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 45;
    int v2 = 97;
    int v3 = 15;
    int v4 = 8;
    int i;
    for (i = 0; i < 10; i++) { __arr_7954[i] = v3 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

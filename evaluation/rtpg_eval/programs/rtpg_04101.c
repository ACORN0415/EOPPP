int __arr_4101[10];
int test_func(void) {
    int v0 = 15;
    int v1 = 8;
    int v2 = 27;
    int v3 = 50;
    int i;
    v3 = v3 - v1;
    for (i = 0; i < 10; i++) { __arr_4101[i] = v2 + i; }
    switch (v1) {
        case 0: v1 = 1; break;
        case 1: v1 = 2; break;
        default: v1 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

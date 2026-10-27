int __arr_8047[10];
int test_func(void) {
    int v0 = 51;
    int v1 = 46;
    int v2 = 71;
    int v3 = 62;
    int i;
    for (i = 0; i < 10; i++) { __arr_8047[i] = v2 + i; }
    v0 = v0 * 8;
    v1 = 66;
    switch (v2) {
        case 0: v2 = 1; break;
        case 1: v2 = 2; break;
        default: v2 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

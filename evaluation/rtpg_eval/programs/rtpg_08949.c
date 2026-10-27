int __arr_8949[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 55;
    int v2 = 81;
    int v3 = 7;
    int v4 = 10;
    int i;
    for (i = 0; i < 10; i++) { __arr_8949[i] = v0 + i; }
    switch (v3) {
        case 0: v3 = 1; break;
        case 1: v3 = 2; break;
        default: v3 = 0; break;
    }
    return v0;
}
int main(void) { return test_func(); }

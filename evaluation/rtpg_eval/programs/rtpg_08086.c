int __arr_8086[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 77;
    int v2 = 22;
    int v3 = 30;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 - v0;
    for (i = 0; i < 10; i++) { __arr_8086[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

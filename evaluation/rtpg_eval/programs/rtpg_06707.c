int __arr_6707[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 32;
    int v2 = 23;
    int v3 = 69;
    int v4 = 5;
    int i;
    v0 = v0 + v3;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_6707[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }

int __arr_1363[10];
int test_func(void) {
    int v0 = 26;
    int v1 = 28;
    int v2 = 41;
    int v3 = 48;
    int v4 = 9;
    int v5 = 55;
    int i;
    for (i = 0; i < 16; i++) {
        v4 = v4 + v4;
    }
    v4 = v4 + v2;
    for (i = 0; i < 10; i++) { __arr_1363[i] = v1 + i; }
    v5 = v5 & v0;
    return v0;
}
int main(void) { return test_func(); }

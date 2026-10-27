int __arr_4957[10];
int test_func(void) {
    int v0 = 44;
    int v1 = 40;
    int v2 = 81;
    int v3 = 17;
    int v4 = 65;
    int v5 = 24;
    int i;
    for (i = 0; i < 9; i++) {
        v3 = v3 + v1;
    }
    v4 = v4 + v1;
    v3 = v3 * 7;
    for (i = 0; i < 10; i++) { __arr_4957[i] = v4 + i; }
    return v0;
}
int main(void) { return test_func(); }

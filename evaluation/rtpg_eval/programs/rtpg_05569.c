int __arr_5569[10];
int test_func(void) {
    int v0 = 32;
    int v1 = 1;
    int v2 = 11;
    int v3 = 71;
    int i;
    for (i = 0; i < 13; i++) {
        v2 = v2 + v3;
    }
    v2 = 68;
    v0 = v0 * 9;
    for (i = 0; i < 10; i++) { __arr_5569[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

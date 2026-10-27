int __arr_8491[10];
int test_func(void) {
    int v0 = 27;
    int v1 = 47;
    int v2 = 74;
    int v3 = 29;
    int i;
    v2 = v2 + v2;
    v2 = v2 * 10;
    for (i = 0; i < 7; i++) {
        v3 = v3 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_8491[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

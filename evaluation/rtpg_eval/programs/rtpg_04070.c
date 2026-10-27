int __arr_4070[10];
int test_func(void) {
    int v0 = 14;
    int v1 = 32;
    int v2 = 81;
    int v3 = 95;
    int v4 = 27;
    int i;
    v1 = v1 * 8;
    for (i = 0; i < 6; i++) {
        v2 = v2 + v3;
    }
    v4 = v4 - v1;
    for (i = 0; i < 10; i++) { __arr_4070[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

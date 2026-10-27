int __arr_7077[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 35;
    int v2 = 99;
    int i;
    v0 = v0 * 9;
    v1 = v1 + v2;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_7077[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }

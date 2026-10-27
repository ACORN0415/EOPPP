int __arr_7819[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 54;
    int v2 = 49;
    int i;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 * 2;
    for (i = 0; i < 10; i++) { __arr_7819[i] = v2 + i; }
    v0 = v0 + v0;
    return v0;
}
int main(void) { return test_func(); }

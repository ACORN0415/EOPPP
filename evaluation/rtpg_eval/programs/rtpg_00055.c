int __arr_55[10];
int test_func(void) {
    int v0 = 98;
    int v1 = 69;
    int v2 = 90;
    int v3 = 5;
    int i;
    if (v1 > v2) { v1 = v2; }
    for (i = 0; i < 10; i++) { __arr_55[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v3 = v3 + v2;
    }
    v1 = v1 * 6;
    return v0;
}
int main(void) { return test_func(); }

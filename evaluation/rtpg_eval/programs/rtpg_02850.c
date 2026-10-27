int __arr_2850[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 87;
    int v2 = 71;
    int i;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v1;
    }
    v2 = v2 * 7;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_2850[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

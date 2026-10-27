int __arr_3936[10];
int test_func(void) {
    int v0 = 10;
    int v1 = 70;
    int v2 = 57;
    int v3 = 84;
    int v4 = 58;
    int v5 = 53;
    int v6 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_3936[i] = v4 + i; }
    v4 = v4 * 10;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

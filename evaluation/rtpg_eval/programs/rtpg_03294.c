int __arr_3294[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 40;
    int v2 = 46;
    int v3 = 1;
    int v4 = 81;
    int v5 = 86;
    int i;
    v4 = v4 * 4;
    for (i = 0; i < 10; i++) { __arr_3294[i] = v4 + i; }
    for (i = 0; i < 20; i++) {
        v3 = v3 + v2;
    }
    v1 = v1 + v4;
    return v0;
}
int main(void) { return test_func(); }

int __arr_6887[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 56;
    int v2 = 84;
    int v3 = 3;
    int v4 = 62;
    int v5 = 2;
    int v6 = 30;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    v3 = v3 + v4;
    for (i = 0; i < 10; i++) { __arr_6887[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }

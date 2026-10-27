int __arr_4796[10];
int test_func(void) {
    int v0 = 95;
    int v1 = 5;
    int v2 = 93;
    int v3 = 12;
    int v4 = 14;
    int v5 = 96;
    int i;
    for (i = 0; i < 10; i++) { __arr_4796[i] = v2 + i; }
    for (i = 0; i < 10; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }

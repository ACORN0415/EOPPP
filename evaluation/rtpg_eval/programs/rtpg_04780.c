int __arr_4780[10];
int test_func(void) {
    int v0 = 83;
    int v1 = 88;
    int v2 = 71;
    int v3 = 3;
    int v4 = 23;
    int v5 = 14;
    int v6 = 34;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_4780[i] = v2 + i; }
    v1 = v1 + v5;
    v2 = 8;
    return v0;
}
int main(void) { return test_func(); }

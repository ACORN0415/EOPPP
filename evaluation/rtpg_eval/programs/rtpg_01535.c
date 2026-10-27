int __arr_1535[10];
int test_func(void) {
    int v0 = 96;
    int v1 = 87;
    int v2 = 76;
    int v3 = 95;
    int v4 = 21;
    int v5 = 76;
    int v6 = 21;
    int i;
    for (i = 0; i < 10; i++) { __arr_1535[i] = v2 + i; }
    for (i = 0; i < 12; i++) {
        v0 = v0 + v1;
    }
    v6 = v6 - v0;
    return v0;
}
int main(void) { return test_func(); }

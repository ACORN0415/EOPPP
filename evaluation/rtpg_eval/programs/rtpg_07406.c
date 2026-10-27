int __arr_7406[10];
int test_func(void) {
    int v0 = 68;
    int v1 = 93;
    int v2 = 97;
    int v3 = 43;
    int v4 = 88;
    int v5 = 34;
    int i;
    for (i = 0; i < 10; i++) { __arr_7406[i] = v3 + i; }
    v1 = v1 - v3;
    v0 = v0 + v1;
    for (i = 0; i < 19; i++) {
        v5 = v5 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

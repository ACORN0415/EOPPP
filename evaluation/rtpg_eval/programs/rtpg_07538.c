int __arr_7538[10];
int test_func(void) {
    int v0 = 76;
    int v1 = 76;
    int v2 = 11;
    int v3 = 67;
    int v4 = 0;
    int v5 = 78;
    int i;
    v1 = v1 + v2;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_7538[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }

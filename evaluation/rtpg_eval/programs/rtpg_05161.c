int __arr_5161[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 100;
    int v2 = 87;
    int v3 = 50;
    int v4 = 7;
    int v5 = 22;
    int i;
    v3 = 53;
    for (i = 0; i < 16; i++) {
        v5 = v5 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_5161[i] = v5 + i; }
    return v0;
}
int main(void) { return test_func(); }

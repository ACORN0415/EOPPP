int __arr_5986[10];
int test_func(void) {
    int v0 = 2;
    int v1 = 64;
    int v2 = 97;
    int v3 = 99;
    int v4 = 66;
    int v5 = 27;
    int v6 = 64;
    int i;
    for (i = 0; i < 10; i++) { __arr_5986[i] = v1 + i; }
    v0 = v0 + v3;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }

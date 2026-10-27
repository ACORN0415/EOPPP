int __arr_5511[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 21;
    int v2 = 78;
    int v3 = 33;
    int i;
    v2 = v2 + v0;
    for (i = 0; i < 8; i++) {
        v3 = v3 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_5511[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

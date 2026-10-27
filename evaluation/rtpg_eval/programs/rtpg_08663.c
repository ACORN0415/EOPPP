int __arr_8663[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 55;
    int v2 = 62;
    int v3 = 62;
    int v4 = 49;
    int i;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v0;
    }
    v3 = v3 - v1;
    for (i = 0; i < 10; i++) { __arr_8663[i] = v4 + i; }
    return v0;
}
int main(void) { return test_func(); }

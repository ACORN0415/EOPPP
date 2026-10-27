int __arr_5028[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 50;
    int v2 = 99;
    int v3 = 72;
    int v4 = 25;
    int v5 = 55;
    int i;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_5028[i] = v3 + i; }
    for (i = 0; i < 20; i++) {
        v0 = v0 + v5;
    }
    return v0;
}
int main(void) { return test_func(); }

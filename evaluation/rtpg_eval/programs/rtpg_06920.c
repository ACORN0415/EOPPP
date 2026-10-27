int __arr_6920[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 2;
    int v2 = 40;
    int v3 = 84;
    int i;
    for (i = 0; i < 10; i++) { __arr_6920[i] = v2 + i; }
    for (i = 0; i < 8; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

int __arr_6395[10];
int test_func(void) {
    int v0 = 92;
    int v1 = 50;
    int v2 = 19;
    int v3 = 14;
    int i;
    for (i = 0; i < 10; i++) { __arr_6395[i] = v0 + i; }
    for (i = 0; i < 11; i++) {
        v2 = v2 + v3;
    }
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }

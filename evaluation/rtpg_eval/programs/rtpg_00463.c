int __arr_463[10];
int test_func(void) {
    int v0 = 59;
    int v1 = 75;
    int v2 = 49;
    int v3 = 26;
    int v4 = 65;
    int v5 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_463[i] = v2 + i; }
    for (i = 0; i < 20; i++) {
        v0 = v0 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

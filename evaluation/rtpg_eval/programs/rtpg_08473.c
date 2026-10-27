int __arr_8473[10];
int test_func(void) {
    int v0 = 29;
    int v1 = 52;
    int v2 = 39;
    int v3 = 50;
    int v4 = 7;
    int v5 = 24;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v3;
    }
    v1 = v1 * 9;
    v1 = v1 - v3;
    for (i = 0; i < 10; i++) { __arr_8473[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

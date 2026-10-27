int __arr_4072[10];
int test_func(void) {
    int v0 = 64;
    int v1 = 44;
    int v2 = 93;
    int i;
    if (v0 > v2) { v0 = v2; }
    for (i = 0; i < 10; i++) { __arr_4072[i] = v2 + i; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

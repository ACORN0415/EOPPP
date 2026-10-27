int __arr_4094[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 46;
    int v2 = 25;
    int v3 = 54;
    int i;
    for (i = 0; i < 8; i++) {
        v2 = v2 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_4094[i] = v0 + i; }
    v1 = v1 * 7;
    return v0;
}
int main(void) { return test_func(); }

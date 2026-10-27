int __arr_5781[10];
int test_func(void) {
    int v0 = 88;
    int v1 = 94;
    int v2 = 80;
    int i;
    v1 = v1 * 6;
    for (i = 0; i < 15; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_5781[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }

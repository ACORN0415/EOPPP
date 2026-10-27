int __arr_4623[10];
int test_func(void) {
    int v0 = 13;
    int v1 = 21;
    int v2 = 27;
    int i;
    v2 = v2 * 3;
    v2 = 20;
    for (i = 0; i < 10; i++) { __arr_4623[i] = v2 + i; }
    for (i = 0; i < 11; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

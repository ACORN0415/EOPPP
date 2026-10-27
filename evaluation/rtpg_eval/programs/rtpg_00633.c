int __arr_633[10];
int test_func(void) {
    int v0 = 78;
    int v1 = 90;
    int v2 = 50;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) { __arr_633[i] = v2 + i; }
    v2 = v2 * 4;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

int __arr_9305[10];
int test_func(void) {
    int v0 = 9;
    int v1 = 63;
    int v2 = 78;
    int i;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v0;
    }
    v1 = v1 - v0;
    v1 = v1 * 9;
    for (i = 0; i < 10; i++) { __arr_9305[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

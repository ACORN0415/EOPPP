int __arr_3674[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 74;
    int v2 = 58;
    int v3 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_3674[i] = v0 + i; }
    for (i = 0; i < 17; i++) {
        v1 = v1 + v2;
    }
    v0 = 87;
    v2 = v2 * 7;
    return v0;
}
int main(void) { return test_func(); }

int __arr_3941[10];
int test_func(void) {
    int v0 = 74;
    int v1 = 17;
    int v2 = 56;
    int v3 = 13;
    int v4 = 24;
    int i;
    for (i = 0; i < 10; i++) { __arr_3941[i] = v2 + i; }
    for (i = 0; i < 13; i++) {
        v0 = v0 + v1;
    }
    v4 = v4 * 10;
    v3 = v3 - v1;
    return v0;
}
int main(void) { return test_func(); }

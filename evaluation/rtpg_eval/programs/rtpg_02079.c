int __arr_2079[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 52;
    int v2 = 32;
    int v3 = 80;
    int v4 = 6;
    int i;
    v0 = v0 * 6;
    for (i = 0; i < 8; i++) {
        v1 = v1 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_2079[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

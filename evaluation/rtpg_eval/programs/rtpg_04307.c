int __arr_4307[10];
int test_func(void) {
    int v0 = 84;
    int v1 = 26;
    int v2 = 78;
    int i;
    v1 = v1 + v1;
    for (i = 0; i < 10; i++) { __arr_4307[i] = v1 + i; }
    v1 = 63;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

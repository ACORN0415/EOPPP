int __arr_4999[10];
int test_func(void) {
    int v0 = 6;
    int v1 = 97;
    int v2 = 52;
    int i;
    v2 = v2 - v1;
    v2 = v2 + v1;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_4999[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

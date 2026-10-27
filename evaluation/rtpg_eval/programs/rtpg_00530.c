int __arr_530[10];
int test_func(void) {
    int v0 = 72;
    int v1 = 83;
    int v2 = 28;
    int i;
    v1 = v1 + v0;
    for (i = 0; i < 10; i++) { __arr_530[i] = v2 + i; }
    for (i = 0; i < 16; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

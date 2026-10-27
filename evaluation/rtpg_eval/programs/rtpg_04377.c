int __arr_4377[10];
int test_func(void) {
    int v0 = 70;
    int v1 = 17;
    int v2 = 79;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_4377[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }

int __arr_6257[10];
int test_func(void) {
    int v0 = 100;
    int v1 = 74;
    int v2 = 72;
    int v3 = 42;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_6257[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }

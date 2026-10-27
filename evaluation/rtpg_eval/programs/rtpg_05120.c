int __arr_5120[10];
int test_func(void) {
    int v0 = 33;
    int v1 = 72;
    int v2 = 7;
    int i;
    v2 = v2 - v1;
    for (i = 0; i < 10; i++) { __arr_5120[i] = v1 + i; }
    for (i = 0; i < 19; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

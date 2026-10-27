int __arr_1464[10];
int test_func(void) {
    int v0 = 30;
    int v1 = 100;
    int v2 = 44;
    int i;
    for (i = 0; i < 11; i++) {
        v2 = v2 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_1464[i] = v1 + i; }
    v0 = v0 - v1;
    return v0;
}
int main(void) { return test_func(); }

int __arr_5676[10];
int test_func(void) {
    int v0 = 20;
    int v1 = 60;
    int v2 = 88;
    int i;
    for (i = 0; i < 10; i++) { __arr_5676[i] = v1 + i; }
    for (i = 0; i < 11; i++) {
        v0 = v0 + v1;
    }
    v2 = v2 - v0;
    return v0;
}
int main(void) { return test_func(); }

int __arr_3752[10];
int test_func(void) {
    int v0 = 41;
    int v1 = 79;
    int v2 = 73;
    int v3 = 20;
    int i;
    v3 = v3 * 2;
    v3 = v3 + v2;
    for (i = 0; i < 10; i++) { __arr_3752[i] = v2 + i; }
    for (i = 0; i < 20; i++) {
        v3 = v3 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

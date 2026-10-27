int __arr_7598[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 48;
    int v2 = 67;
    int i;
    v0 = v0 - v2;
    for (i = 0; i < 17; i++) {
        v2 = v2 + v1;
    }
    for (i = 0; i < 10; i++) { __arr_7598[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }

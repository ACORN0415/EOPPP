int __arr_7891[10];
int test_func(void) {
    int v0 = 58;
    int v1 = 32;
    int v2 = 39;
    int i;
    for (i = 0; i < 10; i++) { __arr_7891[i] = v1 + i; }
    for (i = 0; i < 11; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }

int __arr_1615[10];
int test_func(void) {
    int v0 = 36;
    int v1 = 0;
    int v2 = 64;
    int i;
    v0 = v0 - v1;
    for (i = 0; i < 10; i++) { __arr_1615[i] = v1 + i; }
    for (i = 0; i < 15; i++) {
        v0 = v0 + v1;
    }
    v2 = 79;
    return v0;
}
int main(void) { return test_func(); }

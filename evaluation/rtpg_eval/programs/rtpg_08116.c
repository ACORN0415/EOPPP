int __arr_8116[10];
int test_func(void) {
    int v0 = 69;
    int v1 = 40;
    int v2 = 55;
    int v3 = 50;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_8116[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }

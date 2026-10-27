int __arr_1331[10];
int test_func(void) {
    int v0 = 34;
    int v1 = 29;
    int v2 = 78;
    int v3 = 41;
    int i;
    for (i = 0; i < 14; i++) {
        v1 = v1 + v1;
    }
    v1 = v1 - v3;
    for (i = 0; i < 10; i++) { __arr_1331[i] = v0 + i; }
    return v0;
}
int main(void) { return test_func(); }

int __arr_1113[10];
int test_func(void) {
    int v0 = 99;
    int v1 = 23;
    int v2 = 39;
    int v3 = 48;
    int v4 = 66;
    int i;
    for (i = 0; i < 10; i++) { __arr_1113[i] = v4 + i; }
    for (i = 0; i < 16; i++) {
        v3 = v3 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

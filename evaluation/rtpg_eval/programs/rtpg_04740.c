int __arr_4740[10];
int test_func(void) {
    int v0 = 3;
    int v1 = 37;
    int v2 = 94;
    int v3 = 31;
    int i;
    for (i = 0; i < 14; i++) {
        v2 = v2 + v3;
    }
    for (i = 0; i < 10; i++) { __arr_4740[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }

int __arr_7529[10];
int test_func(void) {
    int v0 = 37;
    int v1 = 25;
    int v2 = 17;
    int v3 = 81;
    int i;
    for (i = 0; i < 10; i++) { __arr_7529[i] = v2 + i; }
    v2 = v2 * 7;
    for (i = 0; i < 10; i++) {
        v2 = v2 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

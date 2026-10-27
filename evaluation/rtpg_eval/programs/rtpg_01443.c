int __arr_1443[10];
int test_func(void) {
    int v0 = 0;
    int v1 = 45;
    int v2 = 25;
    int v3 = 28;
    int i;
    for (i = 0; i < 10; i++) { __arr_1443[i] = v2 + i; }
    v1 = v1 + v3;
    for (i = 0; i < 12; i++) {
        v0 = v0 + v0;
    }
    return v0;
}
int main(void) { return test_func(); }

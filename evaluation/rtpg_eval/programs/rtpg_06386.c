int __arr_6386[10];
int test_func(void) {
    int v0 = 8;
    int v1 = 55;
    int v2 = 81;
    int v3 = 22;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v2;
    }
    for (i = 0; i < 10; i++) { __arr_6386[i] = v2 + i; }
    if (v1 > v3) { v1 = v3; }
    return v0;
}
int main(void) { return test_func(); }

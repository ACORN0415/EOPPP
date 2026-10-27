int __arr_2857[10];
int test_func(void) {
    int v0 = 11;
    int v1 = 37;
    int v2 = 9;
    int v3 = 60;
    int v4 = 88;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_2857[i] = v1 + i; }
    v4 = 72;
    if (v2 > v3) { v2 = v3; }
    return v0;
}
int main(void) { return test_func(); }

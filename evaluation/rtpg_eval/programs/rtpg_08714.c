int __arr_8714[10];
int test_func(void) {
    int v0 = 60;
    int v1 = 2;
    int v2 = 11;
    int v3 = 69;
    int i;
    for (i = 0; i < 5; i++) {
        v1 = v1 + v0;
    }
    for (i = 0; i < 10; i++) { __arr_8714[i] = v1 + i; }
    if (v3 > v2) { v3 = v2; }
    return v0;
}
int main(void) { return test_func(); }

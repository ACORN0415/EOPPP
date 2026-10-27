int __arr_3942[10];
int test_func(void) {
    int v0 = 54;
    int v1 = 44;
    int v2 = 60;
    int i;
    v0 = v0 + v0;
    for (i = 0; i < 10; i++) { __arr_3942[i] = v1 + i; }
    return v0;
}
int main(void) { return test_func(); }

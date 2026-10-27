int __arr_81[10];
int test_func(void) {
    int v0 = 24;
    int v1 = 13;
    int v2 = 23;
    int v3 = 65;
    int i;
    for (i = 0; i < 10; i++) { __arr_81[i] = v1 + i; }
    v2 = v2 + v2;
    v2 = v2 * 4;
    return v0;
}
int main(void) { return test_func(); }

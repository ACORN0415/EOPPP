int __arr_4054[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 10;
    int v2 = 26;
    int v3 = 28;
    int i;
    for (i = 0; i < 5; i++) {
        v3 = v3 + v3;
    }
    v3 = v3 + v0;
    if (v2 > v3) { v2 = v3; }
    for (i = 0; i < 10; i++) { __arr_4054[i] = v2 + i; }
    return v0;
}
int main(void) { return test_func(); }

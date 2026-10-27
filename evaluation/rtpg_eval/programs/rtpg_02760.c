int __arr_2760[10];
int test_func(void) {
    int v0 = 97;
    int v1 = 77;
    int v2 = 19;
    int v3 = 58;
    int i;
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 10; i++) { __arr_2760[i] = v0 + i; }
    for (i = 0; i < 13; i++) {
        v1 = v1 + v1;
    }
    return v0;
}
int main(void) { return test_func(); }

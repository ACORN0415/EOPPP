int __arr_6791[10];
int test_func(void) {
    int v0 = 17;
    int v1 = 14;
    int v2 = 23;
    int v3 = 95;
    int v4 = 87;
    int v5 = 30;
    int i;
    for (i = 0; i < 13; i++) {
        v5 = v5 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_6791[i] = v4 + i; }
    if (v4 > v2) { v4 = v2; }
    return v0;
}
int main(void) { return test_func(); }

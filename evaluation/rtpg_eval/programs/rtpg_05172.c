int __arr_5172[10];
int test_func(void) {
    int v0 = 62;
    int v1 = 89;
    int v2 = 64;
    int v3 = 12;
    int v4 = 92;
    int i;
    for (i = 0; i < 10; i++) { __arr_5172[i] = v4 + i; }
    for (i = 0; i < 18; i++) {
        v4 = v4 + v4;
    }
    if (v1 > v3) { v1 = v3; }
    return v0;
}
int main(void) { return test_func(); }

int __arr_1152[10];
int test_func(void) {
    int v0 = 94;
    int v1 = 67;
    int v2 = 59;
    int v3 = 15;
    int v4 = 89;
    int v5 = 25;
    int i;
    v4 = 48;
    for (i = 0; i < 10; i++) { __arr_1152[i] = v4 + i; }
    if (v3 > v1) { v3 = v1; }
    for (i = 0; i < 11; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }

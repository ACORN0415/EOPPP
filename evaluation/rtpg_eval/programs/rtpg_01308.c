int __arr_1308[10];
int test_func(void) {
    int v0 = 7;
    int v1 = 89;
    int v2 = 95;
    int v3 = 16;
    int v4 = 59;
    int i;
    for (i = 0; i < 10; i++) { __arr_1308[i] = v0 + i; }
    for (i = 0; i < 14; i++) {
        v4 = v4 + v4;
    }
    v3 = 36;
    return v0;
}
int main(void) { return test_func(); }

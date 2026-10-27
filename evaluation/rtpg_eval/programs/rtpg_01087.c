int __arr_1087[10];
int test_func(void) {
    int v0 = 66;
    int v1 = 57;
    int v2 = 28;
    int v3 = 10;
    int v4 = 53;
    int i;
    for (i = 0; i < 10; i++) { __arr_1087[i] = v0 + i; }
    v1 = v1 - v2;
    for (i = 0; i < 13; i++) {
        v0 = v0 + v3;
    }
    return v0;
}
int main(void) { return test_func(); }

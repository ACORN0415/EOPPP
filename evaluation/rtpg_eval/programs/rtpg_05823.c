int __arr_5823[10];
int test_func(void) {
    int v0 = 50;
    int v1 = 8;
    int v2 = 18;
    int v3 = 57;
    int v4 = 63;
    int v5 = 0;
    int i;
    for (i = 0; i < 10; i++) { __arr_5823[i] = v1 + i; }
    for (i = 0; i < 14; i++) {
        v2 = v2 + v2;
    }
    return v0;
}
int main(void) { return test_func(); }

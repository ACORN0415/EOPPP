int __arr_3121[10];
int test_func(void) {
    int v0 = 39;
    int v1 = 92;
    int v2 = 82;
    int v3 = 8;
    int v4 = 83;
    int i;
    for (i = 0; i < 15; i++) {
        v4 = v4 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_3121[i] = v0 + i; }
    v0 = v0 + v4;
    return v0;
}
int main(void) { return test_func(); }

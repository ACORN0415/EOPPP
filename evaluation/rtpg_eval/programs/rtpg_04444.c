int __arr_4444[10];
int test_func(void) {
    int v0 = 25;
    int v1 = 63;
    int v2 = 16;
    int v3 = 26;
    int v4 = 76;
    int i;
    v0 = v0 + v4;
    v2 = v2 - v0;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v4;
    }
    for (i = 0; i < 10; i++) { __arr_4444[i] = v3 + i; }
    return v0;
}
int main(void) { return test_func(); }

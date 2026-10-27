int test_func(void) {
    int v0 = 78;
    int v1 = 4;
    int v2 = 66;
    int v3 = 42;
    int v4 = 30;
    int v5 = 67;
    int v6 = 86;
    int v7 = 68;
    int i;
    v4 = v4 * 10;
    for (i = 0; i < 10; i++) {
        v3 = v3 + v6;
    }
    v3 = v3 - v2;
    return v0;
}
int main(void) { return test_func(); }

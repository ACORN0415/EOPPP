int test_func(void) {
    int v0 = 92;
    int v1 = 30;
    int v2 = 69;
    int v3 = 22;
    int v4 = 45;
    int v5 = 33;
    int v6 = 45;
    int i;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v4;
    }
    v0 = 41;
    v0 = v0 % (v4 + 1);
    return v0;
}
int main(void) { return test_func(); }

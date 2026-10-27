int test_func(void) {
    int v0 = 2;
    int v1 = 48;
    int v2 = 99;
    int v3 = 40;
    int v4 = 40;
    int v5 = 53;
    int v6 = 46;
    int v7 = 67;
    int i;
    for (i = 0; i < 14; i++) {
        v7 = v7 + v2;
    }
    v1 = 66;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

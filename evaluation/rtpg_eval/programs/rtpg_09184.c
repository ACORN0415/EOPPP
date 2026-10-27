int test_func(void) {
    int v0 = 93;
    int v1 = 64;
    int v2 = 2;
    int v3 = 17;
    int v4 = 47;
    int v5 = 78;
    int v6 = 39;
    int v7 = 2;
    int i;
    for (i = 0; i < 16; i++) {
        v0 = v0 + v4;
    }
    v2 = v2 + v0;
    v1 = v1 * 5;
    v3 = v3 % (v5 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

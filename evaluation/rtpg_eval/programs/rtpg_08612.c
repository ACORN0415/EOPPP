int test_func(void) {
    int v0 = 22;
    int v1 = 34;
    int v2 = 48;
    int v3 = 69;
    int v4 = 58;
    int v5 = 8;
    int v6 = 16;
    int v7 = 84;
    int i;
    for (i = 0; i < 6; i++) {
        v1 = v1 + v3;
    }
    v2 = v2 - v1;
    v4 = v4 * 6;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = v3 & v7;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 37;
    int v1 = 15;
    int v2 = 29;
    int v3 = 87;
    int v4 = 30;
    int v5 = 39;
    int v6 = 87;
    int v7 = 48;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v4;
    }
    v2 = v2 * 7;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

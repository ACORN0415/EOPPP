int test_func(void) {
    int v0 = 5;
    int v1 = 98;
    int v2 = 7;
    int v3 = 56;
    int v4 = 64;
    int v5 = 87;
    int i;
    v4 = v4 + v5;
    for (i = 0; i < 12; i++) {
        v1 = v1 + v4;
    }
    v1 = v1 - v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

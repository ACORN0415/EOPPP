int test_func(void) {
    int v0 = 41;
    int v1 = 1;
    int v2 = 47;
    int v3 = 17;
    int v4 = 88;
    int v5 = 36;
    int v6 = 20;
    int i;
    v3 = v3 - v2;
    for (i = 0; i < 8; i++) {
        v6 = v6 + v6;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

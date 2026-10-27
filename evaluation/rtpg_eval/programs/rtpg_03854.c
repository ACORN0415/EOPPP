int test_func(void) {
    int v0 = 13;
    int v1 = 87;
    int v2 = 11;
    int v3 = 23;
    int v4 = 18;
    int v5 = 82;
    int i;
    for (i = 0; i < 6; i++) {
        v4 = v4 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

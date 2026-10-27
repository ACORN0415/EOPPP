int test_func(void) {
    int v0 = 91;
    int v1 = 8;
    int v2 = 18;
    int v3 = 46;
    int v4 = 70;
    int v5 = 53;
    int v6 = 93;
    int i;
    for (i = 0; i < 10; i++) {
        v0 = v0 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

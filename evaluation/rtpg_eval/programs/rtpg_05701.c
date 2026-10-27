int test_func(void) {
    int v0 = 14;
    int v1 = 47;
    int v2 = 54;
    int v3 = 69;
    int i;
    v0 = 29;
    for (i = 0; i < 20; i++) {
        v1 = v1 + v2;
    }
    v3 = v3 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

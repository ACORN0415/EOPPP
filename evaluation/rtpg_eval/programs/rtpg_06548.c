int test_func(void) {
    int v0 = 54;
    int v1 = 8;
    int v2 = 98;
    int v3 = 15;
    int v4 = 47;
    int v5 = 62;
    int i;
    for (i = 0; i < 15; i++) {
        v2 = v2 + v2;
    }
    v5 = v5 + v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

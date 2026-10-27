int test_func(void) {
    int v0 = 80;
    int v1 = 98;
    int v2 = 13;
    int v3 = 3;
    int i;
    for (i = 0; i < 14; i++) {
        v0 = v0 + v0;
    }
    v2 = v2 * 3;
    v3 = v3 + v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v3 = v3 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }

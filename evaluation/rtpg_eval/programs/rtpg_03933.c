int test_func(void) {
    int v0 = 40;
    int v1 = 2;
    int v2 = 55;
    int v3 = 69;
    int i;
    for (i = 0; i < 20; i++) {
        v3 = v3 + v0;
    }
    v3 = v3 % (v0 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

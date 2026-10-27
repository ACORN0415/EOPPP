int test_func(void) {
    int v0 = 56;
    int v1 = 17;
    int v2 = 61;
    int v3 = 66;
    int v4 = 60;
    int i;
    for (i = 0; i < 20; i++) {
        v0 = v0 + v4;
    }
    v2 = 47;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

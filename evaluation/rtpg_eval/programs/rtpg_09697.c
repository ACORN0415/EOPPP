int test_func(void) {
    int v0 = 50;
    int v1 = 12;
    int v2 = 64;
    int i;
    v1 = v1 - v0;
    v2 = 54;
    for (i = 0; i < 9; i++) {
        v2 = v2 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

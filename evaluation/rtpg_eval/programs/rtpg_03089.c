int test_func(void) {
    int v0 = 60;
    int v1 = 3;
    int v2 = 4;
    int v3 = 53;
    int i;
    v2 = 56;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 & v0;
    return v0;
}
int main(void) { return test_func(); }

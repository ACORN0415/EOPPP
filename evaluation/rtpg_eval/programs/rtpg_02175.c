int test_func(void) {
    int v0 = 11;
    int v1 = 28;
    int v2 = 8;
    int v3 = 56;
    int v4 = 59;
    int v5 = 53;
    int i;
    v1 = 73;
    for (i = 0; i < 13; i++) {
        v4 = v4 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 94;
    int v1 = 62;
    int v2 = 18;
    int v3 = 37;
    int i;
    for (i = 0; i < 7; i++) {
        v2 = v2 + v2;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 13;
    int v1 = 15;
    int v2 = 97;
    int v3 = 74;
    int v4 = 83;
    int v5 = 21;
    int v6 = 54;
    int i;
    for (i = 0; i < 15; i++) {
        v6 = v6 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

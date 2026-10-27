int test_func(void) {
    int v0 = 39;
    int v1 = 9;
    int v2 = 77;
    int v3 = 83;
    int v4 = 16;
    int v5 = 5;
    int v6 = 76;
    int i;
    for (i = 0; i < 5; i++) {
        v2 = v2 + v3;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

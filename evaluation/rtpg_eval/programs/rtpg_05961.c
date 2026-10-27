int test_func(void) {
    int v0 = 100;
    int v1 = 2;
    int v2 = 41;
    int v3 = 31;
    int v4 = 38;
    int v5 = 35;
    int v6 = 57;
    int v7 = 89;
    int i;
    for (i = 0; i < 8; i++) {
        v0 = v0 + v5;
    }
    v6 = v6 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

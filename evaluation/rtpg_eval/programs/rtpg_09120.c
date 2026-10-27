int test_func(void) {
    int v0 = 16;
    int v1 = 71;
    int v2 = 89;
    int v3 = 34;
    int v4 = 51;
    int v5 = 60;
    int i;
    for (i = 0; i < 17; i++) {
        v3 = v3 + v5;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

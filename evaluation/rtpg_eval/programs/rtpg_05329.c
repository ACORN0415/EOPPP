int test_func(void) {
    int v0 = 36;
    int v1 = 57;
    int v2 = 3;
    int v3 = 68;
    int v4 = 61;
    int i;
    for (i = 0; i < 6; i++) {
        v0 = v0 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

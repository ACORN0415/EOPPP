int test_func(void) {
    int v0 = 57;
    int v1 = 26;
    int v2 = 38;
    int i;
    for (i = 0; i < 5; i++) {
        v0 = v0 + v1;
    }
    v1 = v1 + v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

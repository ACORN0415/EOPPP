int test_func(void) {
    int v0 = 94;
    int v1 = 85;
    int v2 = 14;
    int v3 = 23;
    int v4 = 12;
    int i;
    for (i = 0; i < 15; i++) {
        v3 = v3 + v0;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

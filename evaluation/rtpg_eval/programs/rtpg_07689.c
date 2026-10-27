int test_func(void) {
    int v0 = 49;
    int v1 = 2;
    int v2 = 69;
    int v3 = 77;
    int i;
    v1 = v1 + v0;
    v2 = v2 ^ v0;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

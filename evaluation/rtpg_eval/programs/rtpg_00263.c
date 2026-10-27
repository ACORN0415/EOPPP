int test_func(void) {
    int v0 = 8;
    int v1 = 83;
    int v2 = 80;
    int v3 = 4;
    int v4 = 87;
    int i;
    v4 = 68;
    v1 = v1 + v4;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

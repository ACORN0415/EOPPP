int test_func(void) {
    int v0 = 4;
    int v1 = 9;
    int v2 = 68;
    int i;
    v0 = 86;
    v2 = v2 * 3;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

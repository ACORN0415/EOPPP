int test_func(void) {
    int v0 = 90;
    int v1 = 25;
    int v2 = 74;
    int v3 = 32;
    int i;
    v1 = 89;
    v3 = v3 * 9;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 59;
    int v1 = 43;
    int v2 = 43;
    int i;
    v0 = v0 * 10;
    v1 = 0;
    v2 = v2 / (v1 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

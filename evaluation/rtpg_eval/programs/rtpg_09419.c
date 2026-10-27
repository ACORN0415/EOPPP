int test_func(void) {
    int v0 = 54;
    int v1 = 94;
    int v2 = 84;
    int v3 = 24;
    int v4 = 69;
    int i;
    v2 = v2 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v1 = v1 % (v2 + 1);
    return v0;
}
int main(void) { return test_func(); }

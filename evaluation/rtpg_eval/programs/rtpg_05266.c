int test_func(void) {
    int v0 = 51;
    int v1 = 93;
    int v2 = 23;
    int v3 = 40;
    int v4 = 99;
    int i;
    v1 = 0;
    v0 = v0 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    v0 = v0 ^ v3;
    return v0;
}
int main(void) { return test_func(); }

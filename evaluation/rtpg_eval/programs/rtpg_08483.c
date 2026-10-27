int test_func(void) {
    int v0 = 11;
    int v1 = 38;
    int v2 = 34;
    int v3 = 85;
    int v4 = 60;
    int i;
    if (v0 > v1) { v0 = v1; }
    v1 = v1 / (v2 + 1);
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

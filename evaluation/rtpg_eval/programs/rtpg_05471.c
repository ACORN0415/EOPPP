int test_func(void) {
    int v0 = 83;
    int v1 = 81;
    int v2 = 63;
    int v3 = 98;
    int i;
    v1 = v1 + v0;
    v3 = v3 - v1;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

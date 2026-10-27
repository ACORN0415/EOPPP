int test_func(void) {
    int v0 = 60;
    int v1 = 60;
    int v2 = 73;
    int v3 = 88;
    int v4 = 89;
    int i;
    v1 = v1 - v2;
    for (i = 0; i < 18; i++) {
        v3 = v3 + v1;
    }
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

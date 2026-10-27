int test_func(void) {
    int v0 = 43;
    int v1 = 60;
    int v2 = 78;
    int i;
    v0 = v0 - v2;
    float __f = 1.5f;
    __f = __f + 1.0f;
    return v0;
}
int main(void) { return test_func(); }

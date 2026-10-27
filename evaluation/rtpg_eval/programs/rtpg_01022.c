int test_func(void) {
    int v0 = 18;
    int v1 = 92;
    int v2 = 78;
    int v3 = 76;
    int v4 = 93;
    int v5 = 92;
    int i;
    v1 = v1 + v1;
    v0 = v0 * 2;
    return v0;
}
int main(void) { return test_func(); }

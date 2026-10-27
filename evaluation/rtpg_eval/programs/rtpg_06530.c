int test_func(void) {
    int v0 = 100;
    int v1 = 8;
    int v2 = 62;
    int v3 = 39;
    int v4 = 16;
    int i;
    v1 = v1 - v2;
    v1 = v1 + v3;
    v4 = v4 * 3;
    return v0;
}
int main(void) { return test_func(); }

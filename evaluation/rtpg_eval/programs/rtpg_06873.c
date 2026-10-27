int test_func(void) {
    int v0 = 32;
    int v1 = 96;
    int v2 = 12;
    int v3 = 60;
    int v4 = 77;
    int i;
    v1 = v1 - v3;
    v1 = v1 * 7;
    v3 = v3 + v4;
    return v0;
}
int main(void) { return test_func(); }

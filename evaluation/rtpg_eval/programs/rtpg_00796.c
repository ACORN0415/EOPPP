int test_func(void) {
    int v0 = 87;
    int v1 = 56;
    int v2 = 16;
    int v3 = 6;
    int i;
    v1 = v1 * 7;
    v3 = 12;
    v1 = v1 - v2;
    return v0;
}
int main(void) { return test_func(); }

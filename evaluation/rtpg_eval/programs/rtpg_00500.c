int test_func(void) {
    int v0 = 82;
    int v1 = 45;
    int v2 = 16;
    int v3 = 16;
    int i;
    v0 = v0 - v3;
    v0 = v0 * 10;
    v2 = v2 + v2;
    return v0;
}
int main(void) { return test_func(); }

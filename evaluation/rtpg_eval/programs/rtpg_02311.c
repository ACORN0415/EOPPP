int test_func(void) {
    int v0 = 1;
    int v1 = 17;
    int v2 = 45;
    int v3 = 13;
    int v4 = 12;
    int i;
    v0 = v0 * 2;
    v3 = v3 - v4;
    v3 = v3 + v3;
    return v0;
}
int main(void) { return test_func(); }

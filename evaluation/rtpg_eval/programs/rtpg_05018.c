int test_func(void) {
    int v0 = 75;
    int v1 = 99;
    int v2 = 50;
    int v3 = 69;
    int i;
    v1 = 47;
    v0 = v0 * 10;
    v0 = v0 + v3;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 90;
    int v1 = 11;
    int v2 = 72;
    int v3 = 73;
    int i;
    v0 = v0 * 3;
    v2 = v2 - v3;
    v3 = v3 + v3;
    v0 = v0 % (v1 + 1);
    return v0;
}
int main(void) { return test_func(); }

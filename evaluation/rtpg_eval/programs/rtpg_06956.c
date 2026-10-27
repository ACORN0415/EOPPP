int test_func(void) {
    int v0 = 14;
    int v1 = 63;
    int v2 = 75;
    int v3 = 70;
    int i;
    v1 = v1 - v0;
    v1 = v1 * 2;
    v2 = v2 + v1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 30;
    int v1 = 12;
    int v2 = 69;
    int v3 = 43;
    int i;
    v2 = v2 - v0;
    v3 = v3 * 5;
    v0 = v0 + v3;
    return v0;
}
int main(void) { return test_func(); }

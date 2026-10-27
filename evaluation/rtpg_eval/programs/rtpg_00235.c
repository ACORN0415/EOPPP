int test_func(void) {
    int v0 = 25;
    int v1 = 38;
    int v2 = 76;
    int v3 = 48;
    int v4 = 84;
    int i;
    v1 = 79;
    v2 = v2 * 2;
    v2 = v2 ^ v0;
    return v0;
}
int main(void) { return test_func(); }

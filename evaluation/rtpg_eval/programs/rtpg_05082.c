int test_func(void) {
    int v0 = 60;
    int v1 = 75;
    int v2 = 84;
    int v3 = 84;
    int i;
    v1 = v1 - v2;
    v2 = v2 * 2;
    v3 = 72;
    v3 = v3 ^ v1;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 100;
    int v1 = 48;
    int v2 = 88;
    int v3 = 38;
    int i;
    v3 = 34;
    v2 = v2 - v0;
    v3 = v3 + v3;
    return v0;
}
int main(void) { return test_func(); }

int test_func(void) {
    int v0 = 92;
    int v1 = 86;
    int v2 = 68;
    int v3 = 16;
    int i;
    v1 = 69;
    v2 = v2 - v3;
    return v0;
}
int main(void) { return test_func(); }

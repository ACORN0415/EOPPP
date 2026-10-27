int test_func(void) {
    int v0 = 72;
    int v1 = 64;
    int v2 = 100;
    int v3 = 16;
    int i;
    v0 = v0 - v2;
    v1 = 55;
    v2 = v2 / (v3 + 1);
    return v0;
}
int main(void) { return test_func(); }

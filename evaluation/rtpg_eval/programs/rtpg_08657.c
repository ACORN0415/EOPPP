int test_func(void) {
    int v0 = 70;
    int v1 = 54;
    int v2 = 56;
    int v3 = 72;
    int i;
    v1 = v1 - v3;
    v2 = v2 + v0;
    return v0;
}
int main(void) { return test_func(); }

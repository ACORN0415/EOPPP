int test_func(void) {
    int v0 = 82;
    int v1 = 4;
    int v2 = 18;
    int v3 = 69;
    int i;
    v2 = v2 + v3;
    v3 = v3 | v2;
    return v0;
}
int main(void) { return test_func(); }
